/* Faça um programa em C que leia dois vetores do tipo inteiro com 10 elementos cada um. O usuário
deverá decidir que operação será feita entre os dois vetores, se soma ou subtração, através de um
caractere lido, o ‘+’ significa que a operação será soma e ‘-’ significa subtração. O programa deve
garantir que o usuário digite somente uma opção válida para a operação desejada.
A operação escolhida pelo usuário será feita entre os elementos de índice par do primeiro vetor lido
e os elementos de índice ímpar do segundo vetor e o resultado de cada operação será gravado nos
elementos de índice par de um terceiro vetor também com 10 posições. A operação escolhida
também será feita entre os elementos ímpares do primeiro vetor e os elementos pares do segundo
vetor e o resultado de cada operação será gravado nas posições de índice ímpar do vetor resultado.
Ao final, exiba os três vetores gerados e em seguida a soma dos elementos de cada um desses
vetores */
/* Sejam fornecidos ao computador o primeiro e segundo vetor conforme o exemplo
abaixo, então o resultado será o Vetor resultado para uma escolha de sinal */ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int vetor1[10];
    int vetor2[10];
    int vetor3[10], i, j;
    int soma1 = 0 , soma2 = 0, soma3 = 0, resultado;
    char operacao;
    printf("Digite uma opreacao: ");
    scanf("\n%c", &operacao);
    printf("Digite um vetor: \n");
    for(i = 0; i<10; i++){
        scanf("%d", &vetor1[i]);
    }
    printf("Digite outro vetor: \n");
    for(i = 0; i<10; i++){
        scanf("%d", &vetor2[i]);
    }




    switch(operacao)
    {
        case'+':
            for(i=0; i<10; i++)
            {
                if(i%2==0){
                    vetor3[i] = vetor1[i] + vetor2[i+1];
                }else{

                    vetor3[i] = vetor1[i] + vetor2[i-1];
                }
            }
            break;
        case'-':
            for(i=0; i<10; i++)
            {
                if(i%2==0){
                    vetor3[i] = vetor1[i] - vetor2[i+1];
                }else{
                    vetor3[i] = vetor1[i] - vetor2[i-1];
                    }
            }
            break;
    }
    for(i=0; i<10; i++){
        printf("%i\t", vetor3[i]);
        soma1 = soma1 + vetor1[i];
        soma2 = soma2 + vetor2[i];
    }

    printf("\n soma1 = %d", soma1);
    printf("\n soma2 = %d", soma2);
    if (operacao == '-'){
        resultado = soma1 - soma2;
    }else{
        resultado = soma1 + soma2;
    }
    printf("soma resultado = %d", resultado);


    return 0;
}
//obrigado deus

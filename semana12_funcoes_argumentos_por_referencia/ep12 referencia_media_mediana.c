/* Faça um programa que possua um menu onde o usuário escolhe,
através da leitura de um caractere, se deseja calcular a média ou a
mediana de um conjunto de 10 valores pertencentes ao intervalo [ 0,
100 ]. O menu deve aceitar os seguintes caracteres:
• ‘M’ para o cálculo da média;
• ‘N’ para o cálculo da mediana;
• ‘S’ para encerrar o programa.
Para cada escolha feita, o programa deverá ler 10 valores para o
vetor, respeitando o intervalo válido para os valores, e o passar o
vetor por referência para a função escolhida pelo usuário que
retornará o valor calculado para a função main.
Atenção:
O programa terá três funções além da main, uma para a leitura e
validação dos dados, que deverá receber o vetor por referência e o
preencher, e outras duas funções que também receberão o vetor por
referência e que farão os cálculos da média e mediana e retornarão o
resultado para a função main, onde serão exibidos.
 */

#include<stdio.h>

#define A 10



void menu(){
    printf(" - escolha uma opcao:\n\t - m para o calculo da media;\n");
    printf("\t - n para o calculo da mediana;\t\n");
    printf("\t - s para encerrar o programa:\t");

}


int leVetor(int v[]){
    do{
        printf("digite 10 numeros entre 0 e 100: ");
        int i;
        for(i=0; i<A; i++){
            printf(" \n");
            scanf("%i", &v[i]);
        }
    }while(0 > v[A]||v[A] > 100);
}


void media(int v[]){
    int  i;
    float media,soma;
    soma = 0;
    for(i=0; i<A; i++){
        soma = soma + v[i];
    }
    media = soma / A;
    printf("\tMedia: %.2f\n", media);

}

void mediana(int v[]){ // ordena o vetor em ordem crescente para depois calcular a medioana
    int i, j, aux;
    float x,y;
    for(i = 0; i < A-1; i++){
        for(j = 0; j < A-i-1; j++){
            if(v[j]>v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }

    }
    for(i=0;i<A;i++){
        printf("%i\t", v[i]);
    }

    x = (v[4]+v[5]);
    y = x/2;
    printf("mediana: %2f\n",y);

}
















int main(){
    int v[A];
    char escolha;
    leVetor(v);
    do{
        menu();
        scanf(" %c", &escolha);
        switch(escolha){
            case 'm':
                printf(" - media:\n");
                media(v);
                break;
            case 'n':
                printf("mediana:\n");
                mediana(v);
                break;
            case 's':
                printf("programa encerrado");
                break;
            default:
                printf("\n\n\ninvalido\n\n\n");


        }





    }while(escolha != 's');


    return 0;
}




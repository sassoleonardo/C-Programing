/* Faça um programa que leia uma frase F de no máximo 500 caracteres, e duas
palavras A e B, ambas de no máximo 25 caracteres. As palavras A e B lidas
deverão ter o mesmo tamanho, caso contrário seu programa deverá acusar erro. O
seu programa deverá exibir como saída a frase F original, com todas as
ocorrências de A nessa frase substituídas por B. */


#include <stdio.h>
#include <string.h>

int main(){
    char texto[500], palavra1[25], palavra2[25];
    int i, j, tamanhotexto, tamanho1 = 0, tamanho2 = 1;

    printf("Digite um texto com ate 500 caracteres: \n");
    gets(texto);
    tamanhotexto = strlen(texto);
    do
    {
        printf("Digite a palavra que sera substituida: \n");
        gets(palavra1);
        tamanho1 = strlen(palavra1);
        printf("Digite a palavra para substituicao: \n");
        gets(palavra2);
        tamanho2 = strlen(palavra2);
        if(tamanho1 != tamanho2){
            printf("Palavras com tamanhos diferentes. \nDigitar palavras com tamanhos iguais.\n");
        }
    }while(tamanho1 != tamanho2);
    for(i = 0; i < tamanhotexto; i++){
        if(texto[i] == palavra1[0]){
                for( j = 1; j < tamanho1; j++){
                    if(texto[j + i] != palavra1[j]){
                        break;
                    }
                }
           if(j == tamanho1){
            for(j = 0; j< tamanho1; j++){
                texto[i + j] = palavra2[j];
            }
           }
        }
    }
    puts(texto);
return 0;
}

/* Escreva um programa que lê duas palavras de tamanho máximo 25
caracteres cada. A primeira palavra está escrita corretamente, enquanto
que a segunda está errada gramaticalmente. Imprima na tela quantos erros
há na segunda palavra, ou seja, quantos caracteres diferem da primeira
palavra. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    char palavra1[25], palavra2[25];
    int resultado, i, soma = 0, c = 0;
    printf("Digite uma palavra: \n");
    gets(palavra1);
    printf("Digite outra palavra: \n");
    gets(palavra2);
    c = strlen(palavra1);

    while(i <= c){
            for(i = 0; i<=c; i++){
        if(palavra1[i] != palavra2[i]){
            soma++;
            }
            }
    }
    printf("numero de erros =  %d", soma);
    return 0;
}





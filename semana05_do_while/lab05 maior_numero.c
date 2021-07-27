/* Criar um algoritmo que determine o maior de vários números inteiros positivos
lidos. Continuar lendo e calculando o maior número até que o usuário entre com
o número 0 (zero). */

#include<stdio.h>
int main(){

    int maior=0, input=0, i=0;

    do{
        printf("Digite um numero: \n");
        scanf("%i", &input);
        if(input==0)
        {
            break;
        }
        if(input>maior)
        {
            maior = input;
        }

    }while(input !=0);
    printf("o maior numero: %i", maior);











}

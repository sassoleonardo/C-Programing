/* Faça um programa que leia o peso (número real) de 10
pessoas, no final do programa, deve ser impresso a
média dos pesos, o maior peso e o menor peso lidos.
Imprimir todos com duas casas decimais. */


#include<stdio.h>

int main(){

    float peso = 0, mediaPeso = 0, somaPeso = 0, maiorPeso = 0, menorPeso = 1000;
    int num;


    for(num =  0; num < 10; num++){

        printf("digite o peso: \n");
        scanf("%f", &peso);

        somaPeso = somaPeso + peso;



        if(peso > maiorPeso){
            maiorPeso = peso;

        }else if(peso < menorPeso){
            menorPeso = peso;



        }

    }
    printf("Maior peso: %f \n", maiorPeso);
    printf("Menor peso: %f \n", menorPeso);
    mediaPeso = somaPeso / num;
    printf("Media peso = %f \n", mediaPeso);








}

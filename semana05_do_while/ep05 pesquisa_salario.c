/* Faça um programa que leia o sexo(char) M ou F, a idade (int) e o salário (float) de uma pessoa
entrevistada. Após ler os dados de um entrevistado o programa deve perguntar ao usuário se ele
deseja informar os dados de mais uma pessoa (‘s’ ou ‘n’). Ao final, depois de ler todos os dados dos
entrevistados, o programa deverá exibir a média de idades de cada um dos sexos e a média de
salários de cada um dos sexos. */

#include<stdio.h>
int main(){
    int somaIdadeHomem = 0, quantidadeHomem = 0;
    float somaSalarioHomem = 0;
    int somaIdadeMulher = 0, quantidadeMulher =  0;
    float somaSalarioMulher = 0;
    int idade;
    float salario;
    char desejaContinuar = 'S';
    char sexo;

    while(desejaContinuar=='S'){
        printf("\n Informe o salario: ");
        scanf("%f", &salario);
        printf("\n Informe a idade: ");
        scanf("%i", &idade);
        printf("\n Informe o sexo: ");
        scanf(" %c", &sexo);

        if(sexo == 'F'){
            somaSalarioMulher = somaSalarioMulher + salario;
            somaIdadeMulher = somaIdadeMulher + idade;
            quantidadeMulher++;


        }else if(sexo == 'M'){
            somaIdadeHomem = somaIdadeHomem + idade;
            somaSalarioHomem = somaSalarioHomem + salario;
            quantidadeHomem++;

        }



        printf("Deseja continuar(S/N): \n");
        scanf(" %c", &desejaContinuar);
    }
    float mediaSalarioHomem = somaSalarioHomem / quantidadeHomem;
    float mediaIdadeHomem = somaIdadeHomem / quantidadeHomem;
    float mediaIdadeMulher = somaIdadeMulher / quantidadeMulher;
    float mediaSalarioMulher = somaIdadeMulher / quantidadeMulher;
    printf("Media salario homem = %f ", mediaSalarioHomem);
    printf("\t\t\tMedia salario mulher = %f ", mediaSalarioMulher);
    printf("\n Media idade homem = %f ", mediaIdadeHomem);
    printf("\t\t\tMedia idade mulher = %f ", mediaIdadeMulher);
    return 0;
}


/* Existe uma maneira de se calcular as medidas de uma escada para que ela seja mais segura e
confortável de subir. Para isso, usamos a fórmula de Blondel. Os degraus de uma escada consistem
de duas partes: o piso e o espelho. A fórmula define que as medidas (em centímetros) do piso e do
espelho devam respeitar a seguinte propriedade:
➤ 63 < 2E + P < 64,
em que E é a medida do espelho, e P a do piso. Para a escada ser confortável de subir, o piso e
espelho devem ter um mínimo de 25cm e 16cm, respectivamente. Escreva um programa que leia
as medidas do piso e espelho e informa se elas respeitam a fórmula de Blondel. Para a leitura dos
valores, crie duas funções (uma para a leitura do valor P e outra para o valor E). */

#include<stdio.h>



float valorE (void) {
    float E;
    do{
    printf("\nDigite um valor E maior ou igual a 16: ");
    scanf(" %f", &E);
    }
    while(E < 15);
    return E;
}


float valorP (void) {
    float P;
    do{
    printf("\nDigite um valor P maior ou igual a 25: ");
    scanf("%f", &P);
    }
    while(P < 24);
    return P;
}

int main(){
    float soma;

    float variavelE = valorE();
    float variavelP = valorP();
    soma = 2*(variavelE) + variavelP;
    printf("soma: %f ", soma);
    if (63 < soma && soma < 64){
        printf(" segue a regra");
    }else{
            printf(" nao segue a regra");
    }
}

// nao entendi a logica da formula de calculo, se eu por os valores E = 25 e P = 16, a conta nao fecha. :(












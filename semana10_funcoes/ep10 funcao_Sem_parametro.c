/* Faça um programa que exiba o maior valor contido em cada uma das
linhas de uma matriz com 3 linhas e 5 colunas. Os valores devem ser
exibidos em ordem crescente. Construa uma função para ler os
valores da matriz com números pertencentes ao intervalo [0, 100]. */

#include<stdio.h>

//funcao main que le a matriz
int main (){
    int result[3];
    int i, j;
    int matriz [3][5];
    for (i=0; i<3; i++){
        printf("linha %d: ", i);
        for(j=0; j<5; j++){
            printf("informe um numero de 0  a 100:  ");
            matriz[i][j]= funcaoLeitura();
        }
        printf("\n");
        printf("\n");
    }
    //pega os maiores valores de cada linha
    for(i=0; i<3; i++){
        result[i] = matriz[i][0];
        for(j=0; j<5; j++){
            if (matriz[i][j] > result[i])
            {
                result[i] = matriz[i][j];
            }
        }
         printf("linha [%d]: %d \t", i, result[i]);
    }
    return 0;
}

//funcao que le a entrada e garanate que o valor esteja no intervalo

int funcaoLeitura (void){
    int x;
    do{
        scanf("%d", &x);
    }while(0 > x||x > 100);
    return x;
}




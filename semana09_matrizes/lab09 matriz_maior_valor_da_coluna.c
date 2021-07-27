/* Faça um programa que leia uma matriz 3x3 com valores informados pelo
usuário controlando para que os valores estejam no intervalo [1..30]. A leitura
deverá ser feita por linhas da matriz. Ou seja, definir todos os elementos de
uma linha, então passar para a próxima linha. No final, imprima na tela a
matriz lida linha por linha e o maior valor de cada coluna da matriz */

#include<stdio.h>
#define X 3

int main (){
        int mat [X][X];
        int i, j;
        int result[X];




            for (i=0; i<X; i++){
                for(j=0; j<X; j++){
                    do{
                    printf("informe o valor entre 1 e 30 [%d][%d]: ", i, j);
                    scanf("%d", &mat[i][j]);
                    }while(1 > mat[i][j]||mat[i][j] > 30);
                }


            }
            printf("   0\t1\t2\n");
            for (i=0; i<X; i++){
                printf("%d: ", i);
                for(j=0; j<X; j++){
                        printf("%d\t", mat[i][j]);
                }
                printf("\n");
            }

            for(j=0; j<X; j++){
                result[j] = mat[0][j];
                for(i=0; i<X; i++){
                    if (mat[i][j] > result[j]){
                        result[j] = mat[i][j];
                    }
                }
            }

            for(i=0; i<X; i++){
                printf("[%d]: %d \t", i, result[i]);

            }

            return 0;
}






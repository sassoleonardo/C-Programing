/* Seu programa deverá ler um número n (com 0 < n <= 5), e uma matriz A de
ordem n. Ele então deverá ler uma série de comandos, dados por um único
caractere (sem aspas):
“L” – rotacionar a matriz para a esquerda (sentido anti-horário)
“R” – rotacionar a matriz para a direita (sentido horário)
“P” – imprimir a matriz
“Q” – encerrar o programa
Notem que cada movimento de rotação deve ser gravado na matriz
original. O comando P é o único que não altera o conteúdo da matriz */

#include<stdio.h>


int main(){
    int n, i, j;
    char op;
    do{
        printf("Digite o tamanho da matriz: ");
        scanf("%i", &n);
    }while(0>n || n>5);

    int mat[n][n];
    int mat2[n][n];


    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("digite as entradas da matriz [%d][%d]: ", i ,j);
            scanf("%d", &mat[i][j]);
        }
    }
    do{
        printf("digite um comando L, R, P ,Q: ");
        scanf(" %c", &op);

        switch(op){

            case 'L':
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                            mat2[i][j] = mat[j][n-i-1];
                    }
                }
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                             mat[i][j] = mat2[i][j];
                    }
                }
                break;
            case 'R':
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                            mat2[i][j] = mat[n-j-1][i];
                    }
                }
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                             mat[i][j] = mat2[i][j];
                    }
                }

                break;
            case 'P':
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                        printf("%d\t", mat[i][j]);
                    }
                    printf("\n");
                }

                break;

            default:

                break;
        }

    }while(op!='Q');


    return 0;


}


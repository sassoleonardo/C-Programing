/* Faça um programa onde o usuário informe um número inteiro entre 1 e 12
representando os meses do ano. O programa deve informar o nome do mês
correspondente e a quantidade de dias desse mês. Caso um mês inválido seja
digitado o programa deve emitir a mensagem de erro apropriada ao usuário.

 */
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite o numero respectivo do mes de 1 a 12: \n");
    scanf("%d", &numero);
    switch(numero){
        case 1: {
            printf("Janeiro, 31 dias \n");
            break;
        }
        case 2: {
            printf("Fevereiro, 28 dias \n");
            break;
        }

        case 3: {
            printf("Mar�o, 31 dias \n");
            break;
        }

        case 4: {
            printf("Abril, 30 dias \n");
            break;
        }
        case 5: {
            printf("Maio, 31 dias \n");
            break;
        }
        case 6: {
            printf("Junho, 30 dias \n");
            break;
        }
        case 7: {
        printf("Julho, 31 dias \n");
        break;
        }
        case 8: {
            printf("Agosto, 31 dias \n");
            break;
        }
        case 9: {
            printf("Setembro, 30 dias \n");
            break;
        }
        case 10:{
            printf("Outubro, 31 dias \n");
            break;
    }
        case 11: {
            printf("Novembro, 30 dias \n");
            break;
        }
        case 12: {
            printf("Dezembro, 31 dias \n");
            break;


        }
        default:
            printf("Numero invalido \n");
            break;



}

return 0;
}

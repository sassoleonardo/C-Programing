/* Faça um programa que leia um número inteiro N maior que 0, o programa deverá
pedir um novo número caso o usuário digite um programa menor ou igual a zero.
Quando o usuário digitar um número válido, então calcule a aproximação do
número de Euler. O resultado deve ser impresso com 10 casas decimais. */

#include<stdio.h>
#include<math.h>
int main(){
    int num, i, j;
    float E = 1, fat;
    while(num <= 0){
        printf("digite um numero positivo:  \n");
        scanf("%i", &num);
    }
    for(i = 1; i <= num; i++){
        fat = 1;
        for(j = 1; j <= i; j++){
            fat = fat * j;
        }
    E = E + (1/fat);
}

printf("E = %0.10f \n", E);
system("pause");

}

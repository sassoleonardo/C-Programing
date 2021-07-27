/* Escreva um programa para implementar uma calculadora simples de números reais
usando o comando switch-case. As seguintes operações: adição (+), subtração (-),
multiplicação (*), divisão (/) e resto da divisão (%). O usuário deverá entrar com as
informações na seguinte ordem: <operando 1> <operação> <operando2>.
Para a operação, considere os caracteres: +, -, *, /, %. Caso o usuário informe que
a operação é inválida, escreva uma mensagem de erro e encerre o programa. */ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x, y,z;
    char op;
    int invalid = 0;
    printf("Digite uma operacao : \n");
    scanf("%c", &op);
    printf("Digite um numero  : \n");
    scanf("%f", &x);
    printf("Digite um numero  : \n");
    scanf("%f", &y);

    switch(op){
    case '+':
       z = x+y;
        break;
    case '-':
        z = x-y;
        break;
    case'/':
        if(y != 0){
            z = x/y;
        }else{
            printf("invalido");
            invalid = 1;
        }

        break;
    case '*':
        if(x==0 && y==0){
            printf("invalido");
            invalid = 1;
        }else{
        z = x*y;
        }
        break;

    default:
        printf("invalido");
    }
    if(invalid == 0)
    printf("%.2f %c %.2f = %.2f", x , op, y, z);

    return 0;

    //Para fazer o resto da divis�o precisa de dois numeros inteiros, mas a entrada � float
    //Por isso n�o consegui fazer o resto da divis�o %




}

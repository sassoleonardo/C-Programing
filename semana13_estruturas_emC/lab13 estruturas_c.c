/* Faça um programa em c que calcule o imposto de renda de um conjunto de 10 pessoas. Os dados de cada pessoa devem
ser armazenados em uma estrutura que contenha os campos para o nome(string), salário mensal(float), deduções(float),
imposto devido(float) e restituição(float).
1. Crie uma função que leia do usuário os três primeiros campos da struct e a retorne para a função main. Essa função
será chamada 10 vezes, uma para cada pessoa.
2. Crie uma função que será chamada somente uma vez e que receba o vetor de structs e, a partir das informações de
salário e deduções, calcule o imposto devido ou a restituição a ser paga para cada pessoa de acordo com a seguinte
fórmula:
Imposto ou Restituição = Deduções - 12*(Salário Mensal)*Alíquota
Se o resultado do cálculo gerar um valor positivo então a pessoa receberá restituição do imposto e o valor calculado deverá ser salvo no campo
restituição enquanto que o campo imposto devido fica zerado.
Se o resultado do cálculo gerar um valor negativo então a pessoa deverá pagar imposto e o módulo do valor calculado deverá ser armazenado no
campo imposto devido enquanto que o campo restituição fica zerado.
O valor referente à alíquota depende do salário mensal de cada pessoa, com a seguinte divisão:
Salário Mensal Alíquota
Até R$ 1.903 0%
De R$ 1.903 até R$ 2.826 7,5%
De R$ 2.826 até R$ 3.751 15%
De R$ 3.751 até R$ 4.664 22,5%
A partir de R$ 4.664 27,5%
3. Crie uma função que receba o vetor de structs e exiba todas as informações de cada uma das pessoas, essa função
será chamada somente uma vez. */

#include<stdio.h>
#include<string.h>
#define A 10


typedef struct {
    char nome[20];
    float salario;
    float deducoes;
    float imposto;
    float restituicao;
}pessoa;
//le os dados digitados pelo usuario
pessoa le_dados(){
    pessoa p;
    printf("digite o nome: \n");
    gets(p.nome);
    printf("digite o salario: \n");
    scanf(" %f", &p.salario);
    printf("digite a deducao: \n");
    scanf(" %f", &p.deducoes );
    fflush(stdin);
    return p;
}
//imprime os dados digitados do usuario
void imprime_dados(pessoa p[A]){
    int i;
    for(i=0; i<A; i++){
        puts(p[i].nome);
        printf("\nsalario: %.2f\n", p[i].salario);
        printf("\ndeducoes: %.2f\n", p[i].deducoes);
        printf("\nimposto: %.2f\n", p[i].imposto);
        printf("\nrestituicao: %.2f\n", p[i].restituicao);
    }
}
//faz o calculo do imposto ou restituiccao
void calculo(pessoa *p){
    int i;
    float x;
    float aliquota;
    for(i=0; i<A; i++){
        if(p[i].salario<1903){
            aliquota = 0;
        }else if(1903 <= p[i].salario && p[i].salario < 2826){
            aliquota = 0.075;
        }else if(2826 <= p[i].salario && p[i].salario < 3751){
            aliquota = 0.15;
        }else if(3751 <= p[i].salario && p[i].salario < 4664){
            aliquota = 0.225;
        }else{
            aliquota = 0.275;
        }
        x = p[i].deducoes - 12*p[i].salario*aliquota;
        if(x>0){
            p[i].restituicao = x;
        }else{
            p[i].imposto = x;
        }
    }


}

int main(){
    pessoa p[A];
    int i;
    for(i=0; i<A; i++){
        p[i] = le_dados();
    }
    calculo(p);
    imprime_dados(p);
}

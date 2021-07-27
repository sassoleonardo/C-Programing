/* Faça um programa onde o usuário digite a nota
(número real) de 15 alunos. Depois, o programa deverá
calcular a média da turma. Por fim, o programa deverá
exibir na tela, com duas casas decimais, todas as notas
dos alunos que forem menores que a média. */

#include<stdio.h>
#define N 5
int main(){
    int  i;
    float media, soma, valor[N];

    soma = 0;
    for(i=0; i<N; i++){
        printf("Nota do aluno: \n");
        scanf(" %f", &valor[i]);
        soma = soma + valor[i];
    }
    printf("soma:  %f \n", soma);
    media = soma / N;
    printf("Media: %f\n", media);

    for(i=0; i<N; i++)
        if(valor[i]<media){
        printf("Abaixo da media: %f \n", valor[i]);
    }




}

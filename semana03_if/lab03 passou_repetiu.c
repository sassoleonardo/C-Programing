/* Crie um programa que leia dois números reais referentes as notas de duas provas,
calcule a média do aluno e diga se o aluno passou (média >= 6.0) ou então se o aluno
repetiu (média < 6.0). */

#include<stdio.h>
#include<math.h>
int main()
{
float nota1, nota2, media;
printf("Digite a nota1:  \n");
scanf("%f", &nota1);
printf("Digite a nota2:  \n");
scanf("%f", &nota2);
media = (nota1 + nota2)/2;
printf("media = %f \n", media);
    if(media>=6)
{

printf("Aluno aprovado");

}
    else
{
printf("Aluno reprovado");
}
return 0;
}











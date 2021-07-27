/* Faça o algoritmo em fluxograma e o programa correspondente que leia quatro valores
reais referentes a notas de um aluno e então calcule e exiba a média das notas do
primeiro semestre, segundo semestre e média final, todas devem ser exibidas com duas
casas decimais.
Atenção:
Média Primeiro Semestre = (P1 + P2) / 2
Média Segundo Semestre = (P3 + P4) / 2
Média Final = (P1 + P2 + P3 + P4) / 4
 */

# include <stdio.h>
 int main (){
   float p1, p2, p3, p4, m1, m2, m3;
     printf("digite a nota p1");
      scanf("%f", &p1);
     printf("digite a nota p2");
      scanf("%f", &p2 );
     printf("digite a nota p3");
      scanf("%f", &p3);
     printf("digite a nota p4");
      scanf("%f", &p4);
        m1=(p1+p2)/2;
        m2=(p3+p4)/2;
        m3=(p1+p2+p3+p4)/4;
     printf("nota semestre1: %0.2f \n", m1);
     printf("nota semestre2: %0.2f \n", m2);
     printf("nota final: %0.2f \n", m3);



 }

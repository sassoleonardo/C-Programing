/* Implemente o programa que leia os valores de x e y, dados em número real,
referentes a coordenadas no plano cartesiano. O programa deverá exibir a
classificação da coordenada seguindo o esquema. Se o ponto estiver sobre algum
dos eixos (x=0 ou y=0), então isso deverá ser escrito na tela. */

#include<stdio.h>
#include<math.h>
int main()
{
float x,y;
    printf("Declare a vari�vel x: \n");
    scanf("%f", &x );
    printf("Declare a variavel y:  \n");
    scanf("%f", &y);
    if (x>0 && y>0)
    {
        printf("Quadrante 1 \n");
    }
    else
        if (x<0 && y<0)
      {
            printf("Quadrante 3 \n");
      }
        else
            if (x<0 && y>0)
    {
                printf("Quadrante 2 \n");
    }
            else
    {
                printf("Quadrante 4");
    }
    return 0;
}

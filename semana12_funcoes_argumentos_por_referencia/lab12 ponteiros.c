/* Faça um programa que leia dois vetores de inteiros de tamanho 5. Passando os dois
vetores por referência para uma função, a função deverá trocar os valores entre as
posições correspondentes de cada vetor. */

#include<stdio.h>
#define A 5

int leVetor1(int v[A]){
    int i;
    for(i=0; i<A; i++){
        printf("v[1]: \n");
        scanf("%d", &v[i]);
    }
}

int leVetor2(int v[A]){
    int i;
    for(i=0; i<A; i++){
        printf("\nv[2] : \n");
        scanf("%d", &v[i]);
    }
}



void imprimeVetor1(int v[A]){
    int i;
    printf("\tvetor (1): \t\t\n\n\n");
    for(i=0; i<A; i++){
        printf("\t%i\t", v[i]);
    }
}

void imprimeVetor2(int v[A]){
    int i;
    printf("\n\tvetor (2): \t\t\n\n\n");
    for(i=0; i<A; i++){
        printf("\t%i\t", v[i]);
    }
}





void troca(int vetor1[A], int vetor2[A]){
    int i, j,x,y;
    for(i=0; i<A; i++){

        x = vetor1[i];
        y = vetor2[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = x;
        vetor1[i] = y;
}

        }


int main(){
    int vetor1[A];
    int vetor2[A];
    leVetor1(vetor1);
    imprimeVetor1(vetor1);
    leVetor2(vetor2);
    imprimeVetor2(vetor2);
    troca(vetor1, vetor2);
    printf("\n\n\n\n *****aplica a funcao troca*****: \n\n\n\n");
    imprimeVetor1(vetor1);
    imprimeVetor2(vetor2);
}

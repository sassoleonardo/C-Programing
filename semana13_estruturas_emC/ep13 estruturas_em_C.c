/* Declare uma struct para armazenar as seguintes informações sobre os cães
de um canil:
• Nome: 15 caracteres
• Idade: inteiro
• Raça: 20 caracteres
O programa deve ler do usuário os dados de 10 cães e uma raça. Após isso,
deverá imprimir na tela o nome dos cães dessa raça, se houverem, e informar
qual deles é o mais velho.
Dicas:
Para limpar o buffer do teclado antes de ler cada novo dado, não esqueça de usar
o comando fflush(stdin).
Atenção:
O programa deverá obrigatoriamente usar struct. */

#include<stdio.h>
#include<string.h>

typedef struct{
    char nome[15];
    int idade;
    char raca[20];
}cachorro;

void achaRaca(cachorro c[], char raca[]){
    int maior = 0;
    int index = 0;


    for(int i=0;i<10;i++){
        if(strcmp(c[i].raca, raca)==0){
            printf("cachorro %s\n", c[i].nome);
            if(c[i].idade > maior){
                maior = c[i].idade;
                index = i;
            }
        }
    }
    printf("o cachorro mais velho eh %s com %d anos", c[index].nome, c[index].idade);
}


int main(){
    int i = 0;
    cachorro c[10];
    char raca[20];
    do{
        printf("informe o nome: \n");
        gets(c[i].nome);
        printf("informe a idade: \n");
        scanf("%d", &c[i].idade);
        fflush(stdin);
        printf("infome a raca: \n");
        gets(c[i].raca);
        printf("*****************\n\n");
        i++;
    }while(i<10);

    printf("digite uma raca para procurar os cachorros: ");
    gets(raca);
    achaRaca(c,raca);

}

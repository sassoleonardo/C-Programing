/* Faça um programa que leia um arquivo de texto contendo um poema e exiba
na tela quantos versos e quantas estrofes tem o poema, sendo cada verso
uma linha com palavras e cada estrofe um bloco de versos separado do bloco
anterior por uma linha em branco. O nome do arquivo deverá ser informado
pelo usuário e o arquivo não deverá ser alterado. */

#include<stdio.h>

int main(){
    char poema[100];
    char nome_do_arquivo[501];
    int verso = 0;
    int estrofe = 0;
    printf("digite r: ");
    gets(nome_do_arquivo);
    FILE * x = fopen ("poema.txt", "r");
    if(x == NULL)
    {
        printf("Erro\n");

        return 0;
    }
    do{
        fgets(poema, 100, x);
        printf("%s", poema);
        if (strlen(poema) > 1)
        {
            verso++;
        }
        else if (strlen(poema) == 1)
        {
            estrofe++;
        }
    }while(!feof(x));
    printf("\n");

    if(verso != 0){
        printf("versos: %d \n", verso);
        printf("estrofes: %d \n\n", estrofe+1);

    }else{
        printf("O arquivo esta vazio");
    }
    fclose(x);
    return 0;
}



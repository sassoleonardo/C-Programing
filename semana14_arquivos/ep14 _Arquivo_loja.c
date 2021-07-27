/* Faça um programa que manuseie dois arquivos. Primeiramente o programa deve criar o arquivo
“itens.txt” e preenchê-lo com dados fornecidos pelo usuário. Para esse procedimento faça uma
função que receba como parâmetro o ponteiro para o arquivo “itens.txt”, que leia do usuário o nome
e o preço de um produto e escreva no arquivo os dados lidos, separados por uma tabulação. A cada
produto inserido a função main deverá perguntar ao usuário se ele deseja inserir outro produto, se a
resposta for sim a função de preenchimento do arquivo deverá ser chamada novamente. Caso a
resposta seja não o programa deve fechar o arquivo.
Após a criação do primeiro arquivo, o programa deve criar o arquivo “nota.txt” e abrir para leitura o
arquivo “itens.txt”. O programa deve solicitar ao usuário o nome dos produtos que foram adquiridos
por um cliente. Para cada nome de produto digitado, o programa deverá procurá-lo no arquivo
“itens.txt” e recuperar o seu valor, somando-o ao valor total da compra. Quando o usuário digitar
“fim”, o programa deverá escrever, no arquivo “nota.txt”, o valor total da compra a ser pago pelo
cliente. */


#include <stdio.h>
#include <string.h>

int main()
{
    //Variavel para armazenar o conteudo do arquivo
    char conteudo[50], opcao, produtos[50], string[50], resposta;
    float preco, soma_preco;
    int num = 0;
    //ponteiro para guardar referencia do arquivo
    FILE *fPtr;
    //abrir� o arquivo no modo escrita
    fPtr = fopen("conteudo.txt", "w");
    // fopen retornar� nulo se a ultima operacao der erro
    if (fPtr == NULL)
    {
        printf("Erro ao abrir arquivo \n\n");
    }
    do
    {
        //coletar conteudo do usuario a partir do scanf()
        printf("\tdigite o conteudo: \n\n");
        scanf("%s", conteudo);
        printf("digite o preco: \n\n");
        scanf("%f", &preco);

        //passar dados para o arquivo a partir do fputs(char, ponteiro arquivo)
        fputs(conteudo, fPtr);
        fprintf(fPtr, " %f\n", preco);
        //condicao para continuar ou nao
        printf("\tdeseja continuar (s ou n): \n\n");
        scanf("%s", &opcao);
    }
    while(opcao == 's');
    //fclose para fechar o arquivo e salvar dados fclose(ponteiro arquivo)
    fclose(fPtr);
    fPtr = fopen("conteudo.txt", "r");
    preco = 0;
    if(fPtr == NULL)
    {
        printf("erro ao abrir a nota\n\n");
    }
    do
    {
        rewind(fPtr);
        printf("\tprodutos comprados: \n\n");
        fflush(stdin);
        scanf("%s", produtos);
        while(!feof(fPtr))
        {
            fscanf(fPtr,"%s", string);
            if(strcmp(string, produtos) == 0)
            {
                fscanf(fPtr, "%f", &preco);
                soma_preco = soma_preco + preco;
                break;
            }
        }
        printf("\to cliente comprou mais alguma coisa(s ou n)?: \n\n");
        scanf("%s", &resposta);
    }
    while(resposta == 's');
    FILE *fp = fopen("nota.txt", "w");
    fprintf(fp, "preco total: %.2f: ", soma_preco);
    return 0;
}

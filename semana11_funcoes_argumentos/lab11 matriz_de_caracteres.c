/* Faça uma função que desenhe N linhas de M caracteres
na tela. A função receberá como argumento o caractere
que será usado para formar a linha, o número N de linhas
e o número M de caracteres por linha que deverá
imprimir. */

#include<stdio.h>
//printar a matriz de caracteres
char print(int n, int m, char c){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%c", c);
        }
    printf("\n");
    }
    return 0;
}



//pede para o usuario informar os negocio
int main(){
    int i, n, m;
    char c;
    printf("informe um caractere: \n");
    scanf("%c", &c);
    printf("Informe um valor para linha: ");
    scanf("%d", &n);
    printf("informe o valor da coluna: ");
    scanf("%d", &m);
    print(n,m,c);

}



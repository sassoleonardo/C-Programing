/* Implementar um jogo de Pedra, Papel e Tesoura (jan-ken-pon). O usuário deve jogar uma das
opções, 1 para pedra, 2 para papel ou 3 para tesoura. O computador deve jogar também (um
número aleatório entre 1 e 3). Devem ser implementadas pelo menos 3 funções (além da main):
• Lê jogada (sem parâmetros, retorna um inteiro) - informa ao usuário quais são as opções de
jogada que ele pode fazer, lê a opção selecionada pelo usuário e verifica se ele informou uma
jogada válida (1, 2 ou 3). Ao final retorna o número da jogada feita pelo usuário.
• Imprime jogada (recebe uma jogada inteira, não retorna nada) - de acordo com a entrada
informada imprime na tela pedra, papel ou tesoura.
• Calcula resultado (recebe dois parâmetros, a jogada do usuário e a do computador,
retorna o resultado inteiro) - de acordo com as jogadas a função deve imprimir: “Papel cobre
pedra” ou “Tesoura corta papel” ou “Pedra amassa tesoura”. Ao final, a função "calcula resultado"
retorna, 1 em caso de empate, 2 para vitória do usuário ou 3 para vitória do computador.
A função principal (main) deve chamar as outras funções para fazer o jogo funcionar. Primeiro devese ler a opção do usuário e gerar uma opção para o computador. Depois imprimir as duas jogadas.
Por fim calcular o resultado e dizer quem venceu ou se houve empate. Em caso de empate, iniciar
uma nova rodada. */

#include<stdio.h>

int leJogada(){
    int x;
    do{
    printf("digite 1(pedra), 2(papel), 3(tesoura): \t");
    scanf("%i", &x);
    }while(1>x||x>3);
    return x;

}

void imprimeJogada(){
    printf("jogada do usuario: ");
    int a;
    switch(a){
    case 1:
       printf("\n\t1: pedra\n\n");
        break;
    case 2:
        printf("\n\t2: papel\n\n");
        break;
    case 3:
        printf("\n\t3: tesoura\n\n");
        break;
    }
return a;
}

int jogadaPc(){
    printf("jogada do pc:\n\n");
    srand(time(NULL));
    int b = (rand()%3+1);
    switch(b){
        case 1:
            printf("\t1: pedra\n");
        break;
        case 2:
            printf("\t2: papel\n");
        break;
        case 3:
            printf("\t3: tesoura\n");
        break;
}
        return b;
}

int resultado(int usuario, int pc){
    if (usuario == 1){
        if(pc==1){
            printf("EMPATE\n\t");
            return -1;
        }else if(pc==2){
            printf("pc ganhou\n");
            return 0;
        }else if(pc==3){
            printf("usuario ganhou\n");
            return 1;
        }



    }else if(usuario==2){
        if(pc==1){
            printf("usuario ganhou\n");
            return 1;
        }else if(pc==2){
            printf("EMPATE\n\t");
            return -1;

        }else if(pc==3){
            printf("pc ganhou\n");
            return 0;
        }



    }else if(usuario == 3){
        if(pc==1){
            printf("pc ganhou\n");
            return 0;
        }else if(pc==2){
            printf("usuario ganhou\n");
            return 1;
        }else if(pc==3){
            printf("EMPATE\n\t");
            return -1;

        }
    }
return 0;
}

int main(){
    int result;
    do{
        int usuario, pc;
        usuario = leJogada();
        imprimeJogada();
        pc = jogadaPc();
        result = resultado(usuario,pc);
    }while(result == -1);

}


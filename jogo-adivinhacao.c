/*
    Para executar o programa no windows
    1: instale o mingw https://pt.wikihow.com/Compilar-um-Programa-Usando-o-Compilador-GNU-(GCC)
    2: no terminal, estando no diretório do arquivo criado, digite
                        gcc jogo-adivinhacao.c -o jogo-adivinhacao.exe
    3: após compilar, digite 
                        ./jogo-adivinhacao.exe
*/

#include <stdio.h>

int main(){
    printf("############\n");
    printf("Vamos jogar!");
    printf("\n############");

    int numeroSecreto = 31;
    printf("\n\nO valor secreto eh xx, tente descobrir qual eh!\n\n");

    int chute;
    printf("Qual eh o seu chute? ");
    scanf("%d",&chute);
    printf("\nSeu chute foi %d\n", chute);
    if(chute == numeroSecreto){
        printf("Acertou");
    }else{
        if(chute>numeroSecreto){
            printf("Errou! valor do chute foi maior que o valor secreto");
    }
    if(chute<numeroSecreto){
        printf("Errou! valor do chute foi menor que o valor secreto");
    }
    }

}
/* 6-Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e
terminando em 0. Mostre uma mensagem "FIM!" após a contagem. */

#include <stdio.h>
#include <time.h>

int main(){

    int contador;

    for(contador = 10; contador >= 0; contador--){
        printf("%d\n", contador);
    }
    printf("Fim!\n");

    return 0;
}
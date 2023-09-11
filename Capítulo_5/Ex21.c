/* 21-Escreva um programa que leia certa quantidade de números, imprima o maior 
deles e quantas vezes o maior número foi lido. A quantidade de números a serem 
lidos deve ser fornecida pelo usuário. */

#include <stdio.h>

int main(){

    int qt, maior = 0, qtmaior = 1, valor;

    printf("Quantos números serão lidos? ");
    scanf("%d", &qt);

    for(int i = 1; i <= qt; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);
        
        if(maior < valor){
            maior = valor;
            qtmaior = 1;
        }else{
            if(maior == valor){
                qtmaior++;
            }
        }
    }

    printf("O maior valor digitado foi o número %d.\n", maior);
    printf("Esse mesmo valor foi digitado %d vezes.\n", qtmaior);

    return 0;
}
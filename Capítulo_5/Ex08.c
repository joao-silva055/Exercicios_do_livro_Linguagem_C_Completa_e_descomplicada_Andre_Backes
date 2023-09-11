/* 8-Faça um programa que leia 10 inteiros e imprima sua média. */

#include <stdio.h>

int main(){

    int valores;
    float media;

    for(int i = 1; i <=10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valores);
        media = media + valores;
    }

    printf("A média dos valores é de %f.\n", media/10);

    return 0;
}
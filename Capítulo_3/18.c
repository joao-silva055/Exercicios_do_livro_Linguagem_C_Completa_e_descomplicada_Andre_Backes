/* 18-Elabore um programa que leia dois números inteiros e exiba o deslocamento, 
à esquerda e à direita, do primeiro pelo segundo. */

#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    printf("Deslocamneto do 1°(%d) pelo 2°(%d)\n", x, y);
    printf("Esquerda: %d\n", x << y);
    printf("Direita: %d\n", x >> y);

    return 0;
}
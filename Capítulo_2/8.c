/* 8-Faça um programa que leia dois números inteiros e depois os imprima 
na ordem inversa que eles foram lidos. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d %d\n",y, x);

    return 0;
}
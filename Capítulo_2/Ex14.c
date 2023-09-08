/* 14-Faça um programa que leia três caracteres do tipo char e depois os imprima 
um em cada linha. Use um único comando printf() para isso. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char x, y, z;

    scanf("%c %c %c", &x, &y, &z);
    printf("%c\n%c\n%c\n", x, y, z);

    return 0;
}
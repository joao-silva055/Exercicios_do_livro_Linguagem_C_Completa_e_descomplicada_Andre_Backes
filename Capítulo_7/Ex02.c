/* 2-Faça um programa que leia uma string e imprima as quatro primeiras letras dela. */

#include <stdio.h>

int main(){

    char str[30];

    printf("Digite uma string qualquer: ");
    fgets(str, 30, stdin);

    printf("Os quatro primeiros caracteres são: ");
    for(int i = 0; i < 4; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

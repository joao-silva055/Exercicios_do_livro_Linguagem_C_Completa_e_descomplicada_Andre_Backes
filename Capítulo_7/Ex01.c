/* 1-Faça um programa que leia uma string e a imprima na tela. */

#include <stdio.h>

int main(){

    char str[20];

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);
    printf("A string digitada foi: %s", str);

    return 0;
}

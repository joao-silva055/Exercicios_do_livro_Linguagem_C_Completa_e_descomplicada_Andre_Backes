/* 4-Faça um programa que leia uma string e a imprima de trás para frente. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[20];
    int limite_string;

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    limite_string = strlen(str);

    printf("String digitada de trás para frente: ");
    for(int i = limite_string; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
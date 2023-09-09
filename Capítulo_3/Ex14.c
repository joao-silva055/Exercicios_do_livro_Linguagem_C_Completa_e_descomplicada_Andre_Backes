/* 14-Faça um programa que converta uma letra maiúscula em letra minúscula. 
Use a tabela ASCII para isso. */

#include <stdio.h>

int main(){

    char x;

    printf("Digite uma letra maiúscula ");
    scanf("%c", &x);

    printf("Letra minúscula %c\n", x + 32);

    return 0;
}
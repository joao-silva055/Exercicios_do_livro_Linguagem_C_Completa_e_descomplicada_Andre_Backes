/* 3-Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos 
caracteres ela possui. */

#include <stdio.h>

int main(){

    char str[30];
    int quantidade_caractere = -1;

    printf("Digite uma string qualquer: ");
    fgets(str, 30, stdin);

    for(int i = 0; str[i]!='\0'; i++){
        quantidade_caractere++;
    }

    printf("A string digitada possui %d caracteres.\n", quantidade_caractere);

    return 0;
}
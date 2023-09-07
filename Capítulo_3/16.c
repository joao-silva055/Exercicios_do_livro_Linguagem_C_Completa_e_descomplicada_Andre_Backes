/* 16-Escreva um programa que leia um número inteiro e mostre a multiplicação 
e a divisão desse número por dois (utilize os operadores de deslocamento de bits). */

#include <stdio.h>

int main (){

    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Divisão (desloc. bits): %d\n", x >> 1);
    printf("Multiplicação (desloc. bits): %d\n", x << 1);

    return 0;
}
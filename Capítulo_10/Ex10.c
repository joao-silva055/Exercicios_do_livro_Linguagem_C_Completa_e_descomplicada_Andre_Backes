/* 10-Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando 
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o 
triplo, e d, o quádruplo. */

#include <stdio.h>

int main(){

    int a, *b = &a, **c = &b, ***d = &c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Dobro de A: %d\n", *b * 2);    
    printf("Triplo de A: %d\n", **c * 3);
    printf("Quádruplo de A: %d\n", ***d * 4);    

    return 0;
}
/* 13-Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = √a² + b². Faça um programa que leia os valores de a e b, e calcule o valor da 
hipotenusa através da fórmula dada. Imprima o resultado. */

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, hip;

    printf("Hipotenusa de um triângulo\n");
    printf("Digite o valor A e B respectivamente: ");
    scanf("%f %f", &a, &b);

    hip = sqrt(pow(a, 2) + pow(b, 2));

    printf("Hipotenusa %f\n", hip);

    return 0;
}
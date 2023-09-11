/* 19-Faça um programa que calcule e escreva o valor de S:
S = (1/1)+(3/2)+(5/3)+(7/4)...+(99/55) */

#include <stdio.h>

int main(){

    float s = 0, denominador = 1;
    int numerador;

    for(numerador = 1; numerador <= 99; numerador += 2){
        s = s + ((float)numerador / denominador);
        denominador++;
    }

    printf("%f\n", s);

    return 0;
}
//SAÍDA: 95.500793
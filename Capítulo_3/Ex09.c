/* 9-Leia um ângulo em graus e apresente-o em conervertido em radianos. A fórmula 
de conversão é R = G * π / 180, sendo G o ângulo em graus e R em radianos e 
π = 3,141592. */

#include <stdio.h>

#define pi 3.141592

int main(){

    float g, r;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &g);

    r = g * pi / 180;

    printf("Conversão em radianos: %f\n", r);


    return 0;
}
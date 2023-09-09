/* 12-Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio² * altura, em que π = 3.141592. */

#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(){

    float altura, raio, volume;

    printf("Altura do cilindro: ");
    scanf("%f", &altura);
    printf("Raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * pow(raio, 2) * altura;

    printf("Volume : %f\n", volume);

    return 0;
}
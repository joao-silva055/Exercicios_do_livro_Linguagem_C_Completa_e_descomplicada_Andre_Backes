/* 11-Leia o valor de um raio de um círculo. Calcule e imprima a área do círculo 
correspondente. A área do círculo é A = π * raio², sendo π = 3.141592. */

#include <stdio.h>
//Inclusão da biblioteca math.h para o uso da função pow().
#include <math.h>
const float pi = 3.141592;

int main(){

    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    //Função pow() para o calculo da potência.
    area = pi * pow(raio, 2);

    printf("Área do circulo %f\n", area);

    return 0;
}
/* 2-Escreva uma função para o cálculo do volume e da área de uma esfera
V = 4 / 3π + r³, A = 4π * r²
em que π = 3.1414592. O valor do raio r deve ser passado por parâmetro, e 
os valores calculados devem ser retornados por referência. */

#include <stdio.h>
#include <math.h>
#define PI 3.1414592

void calculo_esfera(float r, float *a, float *v){
    *v = (4.0 * PI * pow(r, 3)/3.0);
    *a = ((4.0 * PI) * (float)pow(r, 2));
}

int main(){

    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calculo_esfera(raio, &area, &volume);

    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
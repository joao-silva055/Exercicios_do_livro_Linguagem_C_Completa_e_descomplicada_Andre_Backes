/* 5- Escreva uma função para o cálculo do volume de uma esfera 
    V = 4 / 3π * r³,
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro. */

#include <stdio.h>
#include <math.h>
const float PI = 3.1414592;

void volume_esfera(float raio);

int main(){

    float r;

    printf("Digite o valor do raio em cm: ");
    scanf("%f", &r);

    volume_esfera(r);

    return 0;
}

void volume_esfera(float raio){
    float volume;
    volume = (4.0/3.0) * PI * pow(raio, 3);
    printf("O volume da esfera é de %.2fcm³.\n", volume);
}
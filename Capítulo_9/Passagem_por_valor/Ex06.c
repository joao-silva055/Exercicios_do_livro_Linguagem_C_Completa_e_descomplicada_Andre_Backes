/* 6-Escreva uma função que receba o peso (quilos) e a alltura (metros) de uma pessoa. 
Calcule e retorne o IMC (ìndice de Massa Corporal) dessa pessoa: 
IMC = peso / (altura * altura) */

#include <stdio.h>

float calcula_IMC(float h, float p){
    float IMC;
    IMC = p / (h*h);
    return IMC;
}

int main(){

    float peso, altura, imc;

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    imc = calcula_IMC(altura, peso);

    printf("Seu IMC é de %f.\n", imc);

    return 0;
}
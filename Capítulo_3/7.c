/* 7-Faça um programa que leia um valor em reais e a cotação em dólar. Em seguida, 
imprima o valor correspondente em dólar. */

#include <stdio.h>

int main(){

    float reais, cotacao, dolar;

    printf("Valor em R$ ");
    scanf("%f", &reais);
    printf("Cotação R$ ");
    scanf("%f", &cotacao);

    dolar = reais / cotacao;

    printf("Valor em US$ %f\n", dolar);

    return 0;
}
//Dólar está custando R$4,79 em 02/07/2023-23:34
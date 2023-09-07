/* 15-Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, 
calcule e mostre o número formado pelos dígitos invertidos do numero lido. Exemplo: 
Número lido = 123, Número gerado = 321. */

#include <stdio.h>

int main(){

    int a, uni, dez, cent;

    printf("Digite um valor de três digitos: ");
    scanf("%d", &a);

    //Para obter a unidade 
    uni = a % 10;
    //Para obter a dezena
    dez = (a % 100) / 10;
    //Para obter a centena
    cent = (int) a / 100;


    a = uni * 100 + dez * 10 + cent;
    
    printf("O valor inverso é: %d\n", a);

    return 0;
}
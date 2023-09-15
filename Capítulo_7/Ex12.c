/* 12-Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento á vista é de 10% sobre o valor total, calcule o valor
a ser pago á vista. escreva a nome da mercadoria, o valor total, o valor do desconto e o 
valor a ser pago á vista. */

#include <stdio.h>

int main(){

    char mercadoria[20];
    float valor, valor_avista10, valor_desconto10;

    printf("Mercadoria: ");
    fgets(mercadoria, 20, stdin);
    printf("Valor R$ ");
    scanf("%f", &valor);

    valor_avista10 = (valor/100)*90;
    valor_desconto10 = valor - valor_avista10;

    printf("--------------------\n");
    printf("Mercadoria: %s", mercadoria);
    printf("Valor total R$%.2f\n", valor);
    printf("Valor desconto R$%.2f\n", valor_desconto10);
    printf("Valor a ser pago R$%.2f\n", valor_avista10);

    return 0;
}
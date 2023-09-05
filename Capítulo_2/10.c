/* 10-Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma (\). */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia, mes, ano;

    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("Data: %d\\%d\\%d\n", dia, mes, ano);

    return 0;
}
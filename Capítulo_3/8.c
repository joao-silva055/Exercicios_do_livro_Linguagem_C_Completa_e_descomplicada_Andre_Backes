/* 8-Leia um valor que represente uma temperatura em graus Célsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é F = C*(9.0/5.0) + 32,
sendo F a temperatura em Fahrenheit e C a temperatura em Célsius. */

#include <stdio.h>

int main(){

    float c, f;

    printf("Digite a temperatura em graus célsius: ");
    scanf("%f", &c);

    f = c*(9.0 / 5.0) + 32;

    printf("O equivalente em fahrenheits é: %f\n", f);

    return 0;
}
/* 6- Leia uma velocidade em km/h e apresente convertida em m/s. A fórmula
de conversão é m = k/36, sendo k a velocidade em km/h e m em m/s. */

#include <stdio.h>

int main(){

    float k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &k);
    m = k / 3.6;
    printf("M/S: %f\n", m);

    return 0;
}
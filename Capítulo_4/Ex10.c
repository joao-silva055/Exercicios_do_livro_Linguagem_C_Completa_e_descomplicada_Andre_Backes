/* 10-Faça um programa que leia três números inteiros positivos e efetue o 
cálculo de uma das seguintes médias de acordo com um valor numérico digitado 
pelo usuário e mostrado na tabela a seguir:  

NÚMERO DIGITADO                 MÉDIA
        1                       GEOMÉTRICA
                                sqrt(X*Z*Y)

        2                       PONDERADA
                                (X+(2*Y)+(3*Z)) / 6

        3                       HARMÔNICA
                                1 / ((1/X) + (1/Y) + (1/Z))
        
        4                       ARITMÉTICA
                                (X + Y + Z) / 3 */

#include <stdio.h>
#include <math.h>

int main(){

    int x, y, z, media;
    float calculo;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\t\tMÉDIA\nGeometrica[1]\t\tPonderada[2]\nHarmônica[3]\t\tAritmétic[4]\nOpção: ");
    scanf("%d", &media);

    switch(media){
        case 1:{calculo = cbrt(x*y*z);printf("Resultado: %f\n", calculo);}break;
        case 2:{calculo = (x + 2*y + 3*z)/6;printf("Resultado: %f\n", calculo);};break;
        case 3:{calculo = 1/((1/x)+(1/y)+(1/z));printf("Resultado: %f\n", calculo);}break;
        case 4:{calculo = (x + y + z)/3;printf("Resultado: %f\n", calculo);}break;
        default : printf("Opção inválida!\n");
    }

    return 0;
}
/* 10-A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, 
sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. o terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores. */

#include <stdio.h>
#define importancia 78000000

int main(){

    float ganhador1, ganhador2, ganhador3;

    ganhador1 = (importancia/100) * 46;
    ganhador2 = (importancia/100) * 32;
    ganhador3 = importancia - (ganhador1 + ganhador2);

    printf("1° ganhador R$ %f\n", ganhador1);
    printf("2° ganhador R$ %f\n", ganhador2);
    printf("3° ganhador R$ %f\n", ganhador3);

    printf("Premio total de %f\n", ganhador1 + ganhador2 + ganhador3);

    return 0;
}
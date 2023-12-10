/* 1-Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S = 1³ + 2³ + ... + n³ */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Sum_N_Cubic(int n){
    if(n == 1){
        return 1;
    }else{
        return pow(n, 3) + Sum_N_Cubic(n - 1);
    }
}

int main(){

    int value, sum;

    printf("Digite um valor: ");
    scanf("%d", &value);

    sum = Sum_N_Cubic(value);

    printf("A soma dos primeiros %d cubos é de %d.\n", value, sum);

    return 0;
}

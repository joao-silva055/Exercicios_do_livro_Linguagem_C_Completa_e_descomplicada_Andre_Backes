/* 20-Faça um programa que leia um valor inteiro e positivo N, calcule e 
mostre o valor E, conforme a fórmula a seguir: 
E = (1/1!)+(1/2!)+(1/3!)...+(1/N!) */

#include <stdio.h>

int main(){

    int fat = 1, n;
    float e = 0;

    do{
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &n);
    }while(n <= 0);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            fat *= j;
        }
        e += (1.0/(float)fat);
        fat = 1;
    }

    printf("E = %f\n", e);

    return 0;
}
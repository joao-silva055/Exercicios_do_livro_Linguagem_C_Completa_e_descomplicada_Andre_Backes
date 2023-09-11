/* 13-Faça um programa que exiba a soma de todos os números naturais abaixo de 
1.000 que são multiplos de 3 ou 5. */

#include <stdio.h>

int main(){

    int soma = 0;

    for(int i = 0; i < 1000; i++){
        if((i%3 == 0) || (i%5 == 0)){
            soma = soma + i;
        }
    }
    printf("A soma dos número naturais abaixo de 1000 é de %d.\n", soma);

    return 0;
}
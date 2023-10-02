/* 1-Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na 
memória: char, int, float, double. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Tamanho em byte ocupado por char: %ld\n", sizeof(char));    
    printf("Tamanho em byte ocupado por int: %ld\n", sizeof(int));
    printf("Tamanho em byte ocupado por float: %ld\n", sizeof(float));
    printf("Tamanho em byte ocupado por double: %ld\n", sizeof(double));

    return 0;
}

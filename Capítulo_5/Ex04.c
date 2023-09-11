/* 4-Faça um programa que determine e mostre os cinco primeiros multiplos de 3 
considerando números maiores que 0. */

#include <stdio.h>

int main(){

    int contador = 1, multiplos = 1;

    do{

        if(multiplos%3 == 0){
            contador++;
            printf("%d ", multiplos);
        }
        multiplos++;

    }while(contador <= 5);

    printf("\n");

    return 0;
}

//SAIDA: 3 6 9 12 15 
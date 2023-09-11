/* 3-Faça um programa que leia um número inteiro N e depois imprima os N primeiros 
números naturais ímpares. */

#include <stdio.h>

int main(){

    int valor, contador = 1, impares = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    do{

        //A verificação poderia ser feita de forma direta sem o uso do '!'
        if(!(impares%2 == 0)){
            contador++;
            printf("%d ", impares);
        }
        impares = impares + 1;

    }while(contador <= valor);

    return 0;
}
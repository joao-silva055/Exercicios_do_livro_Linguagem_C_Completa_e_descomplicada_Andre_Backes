/* 1-Faça um programa que leia um número inteiro e retorne o seu antecessor 
e seu sucessor. */

#include <stdio.h>

int main(){

    int x;
    
    scanf("%d",&x);
    printf("Antecessor: %d\nSucessor: %d\n", x - 1, x + 1);

    return 0;
}

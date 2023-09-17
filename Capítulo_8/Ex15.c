/* 15-Crie uma união contendo dois tipos básicos diferentes. Agora escreva um programa que 
inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo. */

#include <stdio.h>
union tp_basicos{
    int x;
    char y;
}basicos;

int main(){

    basicos.x = 100;
    printf("Valor do tipo char: %c\n", basicos.y);

    return 0;
}
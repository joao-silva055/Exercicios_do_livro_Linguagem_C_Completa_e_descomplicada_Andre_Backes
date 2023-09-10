/* 12-Usando o comando switch, escreva um programa que leia um inteiro entre 
1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, Domingo,
se 1, segunda-feira, se 2, e assim por diante. */

#include <stdio.h>

int main(){

    int dia_semana;

    printf("Digite um valor de 1 á 7: ");
    scanf("%d", &dia_semana);

    switch(dia_semana){
        case 1:printf("Domingo\n");break;
        case 2:printf("Segunda-feira\n");break;
        case 3:printf("Terça-feira\n");break;
        case 4:printf("Quarta-feira\n");break;
        case 5:printf("Quinta-feira\n");break;
        case 6:printf("Sexta-feira\n");break;
        case 7:printf("Sábado\n");break;
        default : printf("Valor fora da métrica!\n");
    }

    return 0;
}
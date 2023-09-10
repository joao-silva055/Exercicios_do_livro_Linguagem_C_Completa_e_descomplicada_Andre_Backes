/* 13-Faça um programa que mostre ao usuário um menu com quatro opções de 
operações matemáticas (as operações básicas por exeplo). O usuário escolhe 
uma das opções, e o seu programa pede dois valores numéricos e realiza a 
operação, mostrando o resultado. */

#include <stdio.h>

int main(){

    float x, y;
    char opcao;

    printf("\tOperação matemática\n");
    printf("Adição[+]\tSubtração[-]\nProduto[*]\tDivisão[/]\nOpção: ");
    opcao = getchar();

    printf("Digite dois valores para o calculo: ");
    scanf("%f %f", &x, &y);

    switch(opcao){
        case '+':{
            printf("Resultado: %f\n", x + y);
        }break;
        case '-':{
            printf("Resultado: %f\n", x - y);
        }break;
        case '*':{
            printf("Resultado: %f\n", x * y);
        }break;
        case '/':{
            printf("Resultado: %f\n", x / y);
        }break;
    default : printf("Opção invalida!\n");

    }

    return 0;
}
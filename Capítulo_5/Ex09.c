/* 9-Escreva um programa que leia 10 números e escreva o menor valor lido e o maior 
valor lido. */

#include <stdio.h>

int main(){

    int maior = 0, menor, valores;

    printf("Digite o 1º valor: ");
    scanf("%d", &menor);

    for(int i = 2; i <=10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valores);

        if(maior < valores)
            maior = valores;

        if(menor > valores)
            menor = valores;
    }

    printf("O maior valor digitado foi %d.\n", maior);
    printf("O menor valor digitado foi %d.\n", menor);

    return 0;
}
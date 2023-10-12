/* 6-Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada linha do arquivo 
possui nome, quantidade e valor unitário do produto. O programa então exibe o total da compra.

Levando em consideração o arquivo na seguinte sequência


Sabão 4 5.99
Farinha 2 2.99
Açucar 1 2.50
Biscoito 3 3.99

*/

#include <stdio.h>
#include <stdlib.h>

int main(){ 

    char Product[20];
    int ProductQuantity;
    float ProductValue, AmountToPay = 0.0;

    FILE *ShoppingList = fopen("arq1.txt", "r");
    if(ShoppingList == NULL){
        perror("Erro: ");
    }

    while(!feof(ShoppingList)){
        fscanf(ShoppingList, "%s %d %f ", Product, &ProductQuantity, &ProductValue);
        AmountToPay += ((float)ProductQuantity * ProductValue);
    }

    printf("O valor total da lista é de R$%.2f.\n", AmountToPay);

    fclose(ShoppingList);
    ShoppingList = NULL;

    return 0;
}
/* 17-Elabore um, programa que leia um arquivo binário contendo 100 números. Mostre na tela a 
soma desses números. */

#include <stdio.h>
#include <stdlib.h>
//Usei somente 5 valores para facilitar os testes
//Para usar os 100 valores é só alterar o valor da constante abaixo
#define TotalNumbers 5

int main(){

    int HundredNumbers[TotalNumbers], TotalSum = 0;
    FILE *AddOneHundred = fopen("arq1.bin", "rb");
    if(AddOneHundred == NULL){
        perror("Erro: ");
        exit(1);
    }

    while(!feof(AddOneHundred)){
        fread(HundredNumbers, sizeof(int), TotalNumbers, AddOneHundred);
    }

    for(int i = 0; i < TotalNumbers; i++){
        TotalSum += HundredNumbers[i];
    }

    printf("A soma dos 10 números é de %d.\n", TotalSum);

    fclose(AddOneHundred);
    AddOneHundred = NULL;

    return 0;
}
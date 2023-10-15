/* 16-Faça um programa que leia 100 números. Esse programa deverá, em seguida, armazenar esses
números em um arquivo binário. */

#include <stdio.h>
#include <stdlib.h>
//Usei somente 5 valores para facilitar os testes
//Para usar os 100 valores é só alterar o valor da constante abaixo
#define TotalNumber 5

int main(){

    FILE *HundredNumbers;
    int Numbers[TotalNumber];
    HundredNumbers = fopen("arq1.bin", "wb");
    if(HundredNumbers == NULL){
        perror("Erro: ");
        exit(1);
    }

    for(int i = 0; i < TotalNumber; i ++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &Numbers[i]);
    }

    fwrite(Numbers, sizeof(int), TotalNumber, HundredNumbers);

    fclose(HundredNumbers);
    HundredNumbers = NULL;

    return 0;
}
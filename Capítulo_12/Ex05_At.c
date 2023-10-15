/* 5-Faça um programa que leia números positivos e os converta em binário. Cada número
binário deverá ser salvo em uma linha de um arquivo texto. O programa termina quando o 
usuário digitar um número negativo. */

#include <stdio.h>
#include <stdlib.h>

/* Créditos a @devair1010 */
/* https://pt.stackoverflow.com/questions/587766/converter-valor-decimal-para-bin%c3%a1rio-em-c/587796#587796 */

void ConvertDecimalsToBinari(int Decimal, FILE *ListOfBinaries){
    int Count = 7, Vet[8] = {};
    if(Decimal<0 || Decimal>255)return;
    fprintf(ListOfBinaries, "%5d = ",Decimal);
    do{
        Vet[Count] = Decimal%2;
        Count--;
        Decimal /= 2;
    }while(Decimal > 0);
    for(;Decimal<8; Decimal++){
        fprintf(ListOfBinaries,"%d", Vet[Decimal]);
    }
}

int main(){

    FILE *ListOfBinaries;
    char FileName[20];
    int decimal;

    printf("Informe o arquivo (.txt) onde serão salvos os valores: ");
    scanf("%s", FileName);

    ListOfBinaries = fopen(FileName, "w+");
    if(ListOfBinaries == NULL){
        perror("Erro: " );
        exit(1);
    }

    do{
        printf("Digite um valor inteiro para conversão: ");
        scanf("%d", &decimal);
        ConvertDecimalsToBinari(decimal, ListOfBinaries);
        fprintf(ListOfBinaries, "\n");
    }while(decimal >= 0);

    fclose(ListOfBinaries);
    ListOfBinaries = NULL;

    return 0;
}
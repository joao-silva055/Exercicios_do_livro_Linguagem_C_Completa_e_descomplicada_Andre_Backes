/* 11-Escreva um programa que contenha uma estrutura representando uma data válida. Essa 
estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene 
nessa estrutura. Calcule e exiba o número de dias que decorrem entre as duas. */

#include <stdio.h>
#include <stdlib.h>

struct st_datas{
    int dia, mes, ano;
}datas[2];

int main(){

    int dias_corridos = 0;

    for(int i = 0; i < 2; i++){
        do{
        printf("Digite a %dº data:\n", i+1);
        printf("Dia: ");
        scanf("%d", &datas[i].dia);
        printf("Mês: ");
        scanf("%d", &datas[i].mes);
        printf("Ano: ");
        scanf("%d", &datas[i].ano);
        }while((datas[i].dia < 0 || datas[i].dia > 30) ||
        (datas[i].mes < 1 || datas[i].mes > 12));
    }

    /*Não estão sendo considerados anos bissextos nem a variação dos dias nos meses*/
    dias_corridos = abs(datas[0].ano - datas[1].ano)*365;
    dias_corridos += abs(datas[0].mes - datas[1].mes)*30;
    dias_corridos += abs(datas[0].dia - datas[1].dia);

    printf("A diferença de dias entre as duas datas é de %d dias.\n", dias_corridos);

    return 0;
}
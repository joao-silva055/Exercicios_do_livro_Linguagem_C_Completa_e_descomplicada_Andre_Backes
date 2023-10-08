/* 3-Escreva um programa para converter o conteúdo de um arquivo texto em caracteres 
maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome
do arquivo a ser salvo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE *arq1, *arq2;
    char converte[50], NomeArquivo[50];

    /*Leio o nome do 1º arquivo e verifico sua existência logo o abro para leitura*/
    printf("Digite o nome do 1º arquivo(.txt) de onde virão os dados: ");
    scanf("%s", NomeArquivo);
    arq1 = fopen(NomeArquivo, "r");
    if(arq1 == NULL){
        perror("Erro: ");
        exit(1);
    }

    /*Leio o nome do 2º arquivo e verifico sua existência logo o abro para escrita*/
    printf("Digite o nome do 2º arquivo(.txt) aonde serão salvo os dados: ");
    scanf("%s", NomeArquivo);
    arq2 = fopen(NomeArquivo, "w");
    if(arq2 == NULL){
        perror("Erro: ");
        exit(1);   
    }

    int cont = 0;
    //Passo o valor de arq1 para variável converte
    while(1){
        //Saio do loop quando chegar ao fim do arquivo
        if(feof(arq1)){
            break;
        }
        //converte na posição cont recebe o caractere da posição cont dentro de arq1
       converte[cont] = getc(arq1);
       cont++;
    }
    //Adiciono o '\0' ao final da string para indicar seu fim 
    converte[cont-1] = '\0';

    //Converto o conteúdo que estava em arq1 para maiúscula
    for(int i = 0; i < strlen(converte); i++){
        converte[i] = toupper(converte[i]);
    }
    //Depois de convertida ponho o valor de converte em arq2 (destino)
    fputs(converte, arq2);


    fclose(arq1);
    fclose(arq2);

    return 0;
}
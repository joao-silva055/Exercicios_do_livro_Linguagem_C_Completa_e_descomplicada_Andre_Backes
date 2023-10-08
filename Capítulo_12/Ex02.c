/* 2-Escreva um programa que leia do usuário os nomes de dois arquivos de texto. Crie um  
terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro 
seguido do coneúdo do segundo). */

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq1, *arq2, *arq3;
    char NomeArquivo[25];
    
    printf("Digite o nome do 1º arquivo (.txt): ");
    scanf("%s", NomeArquivo);
    arq1 = fopen(NomeArquivo, "r");
    if(arq1 == NULL){
        perror("ERRO 1º Arquivo: ");
        exit(1);
    }

    printf("Digite o nome do 2º arquivo (.txt): ");
    scanf("%s", NomeArquivo);
    arq2 = fopen(NomeArquivo, "r");
    if(arq2 == NULL){
        perror("ERRO 2º Arquivo: ");
        exit(1);
    }

    arq3 = fopen("arq3.txt", "w");
    if(arq3 == NULL){
        perror("ERRO 3º Arquivo: ");
        exit(1);
    }

    //Reutilizo a variável NomeArquivo para passar os valores de arq1 e arq2 para arq3

    //Passo o valor do arquivo 1 para NomeArquivo
    fgets(NomeArquivo, 25, arq1);
    //Passo o valor de Nomearquivo para o arquivo 3
    fputs(NomeArquivo, arq3);

    //Passo o valor do arquivo 2 para NomeArquivo
    fgets(NomeArquivo, 25, arq2);
    //Passo o valor de Nomearquivo para o arquivo 3
    fputs(NomeArquivo, arq3);
    
    fclose(arq1);    
    fclose(arq2);
    fclose(arq3);

    return 0;
}
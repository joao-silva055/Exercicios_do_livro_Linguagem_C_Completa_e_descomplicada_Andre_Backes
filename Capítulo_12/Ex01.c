/* 1- Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, 
mostre na tela quantas linhas esse arquivo possui. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    char Nome_Arquivo[20], c;
    int cont = 1;

    printf("Digite o nome do arquivo, com '.txt' no final: ");
    scanf("%s", Nome_Arquivo);

    arq = fopen(Nome_Arquivo, "r");
    if(arq == NULL){
        perror("Erro: ");
        exit(1);
    }

    while(fread(&c, sizeof(char), 1, arq)){
        if(c == '\n'){
            cont++;
        }
    }

    printf("O arquivo possui %d linhas.\n", cont);

    fclose(arq);

    return 0;
}

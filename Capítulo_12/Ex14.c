/* 14-Crie um programa para calcular e exibir o número de palavras contidos em um arquivo texto.
O usúario deverá informar o nome do arquivo. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *SearchFile;
    char FileName[20];
    
    printf("Digite o nome do arquivo para contagem de palavras: ");
    scanf("%s", FileName);

    SearchFile = fopen(FileName, "r");
    if(SearchFile == NULL){
        perror("Erro: ");
        exit(1);
    }

    char ControlCharacter = '\0';
    int Counter = 0, Flag = 0;
    while(!feof(SearchFile)){
        if(feof(SearchFile)){
            break;
        }
        ControlCharacter = fgetc(SearchFile);
        if((ControlCharacter == ' ') || (ControlCharacter == '\n')){
            if(Flag == 0){
                Counter++;
                Flag = 1;
            }
        }else{
            if(Flag == 1){
                Flag = 0;
            }
        }
    }

    if(Counter >= 1){
        Counter++;
    }

    printf("O arquivo possui %d palavras.\n", Counter);

    fclose(SearchFile);
    SearchFile = NULL;

    return 0;
}

/*Não funciona corretamente se houver somente uma palavra no arquivo. O arquivo tem que ter pelo 
menos duas palavras ou uma palavra acompanhada de um espaço em branco ou uma quebra de linha, se 
encontar a resolução correta, por favor, faça a correção.*/
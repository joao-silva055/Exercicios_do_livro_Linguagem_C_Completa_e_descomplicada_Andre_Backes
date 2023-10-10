/* 4-Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma palavra, 
o programa informe o número de vezes que essa palavra aparece dentro do arquivo. */

/*Adaptação do exercicio 9 presente no capítulo 7 sobre strings*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *SearchFile;
    char WordToSearch[100], FileContent[100];
    char FileName[20],  ExchangeAuxiliaryWord[100];

    printf("Digite o nome do arquivo (.txt) onde será realizada a busca: ");
    scanf("%s", FileName);

    SearchFile = fopen(FileName, "r");
    if(SearchFile == NULL){
        perror("Erro: ");
        exit(1);
    }

    printf("Digite a palavra que deseja buscar no arquivo %s: ", FileName);
    scanf("%s", WordToSearch);

    char c;
    int i = 0;
    //Inserimos caractere por caractere dentro de nova variável FileContent
    while(fscanf(SearchFile, "%c", &c) != EOF){
        FileContent[i] = c;
        i++;
    }
    //Garantimos que seu conteudo termine com '\0', que indica o final da string criada
    FileContent[strlen(FileContent)] = '\0';

    int Score = 0, j;
    for(i = 0, j = 0; FileContent[i] != '\0'; i++){
        //Devido a leitura de caractere por caractere do conteudo do arquivo precisamos informar
        //também a quebra de linha recorrente
        while(FileContent[i] != ' ' && FileContent[i] != '\0' && FileContent[i] != '\n'){
            ExchangeAuxiliaryWord[j] = FileContent[i];
            i++;
            j++;
        }
        //Inserimos o caractere que indica o final de cada palavra lida
        ExchangeAuxiliaryWord[j] = '\0';
        if(strcmp(ExchangeAuxiliaryWord, WordToSearch) == 0){
            Score++;
            j = 0;
        }else{
            j = 0;
        }
    }

    printf("A palavra '%s' aparece %d vezes no arquivo %s.\n", WordToSearch, Score, FileName);

    fclose(SearchFile);
    SearchFile = NULL;
    return 0;
}
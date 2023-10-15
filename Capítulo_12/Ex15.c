/* 15-Elabore um programa para calcular e exibir o número de vezes que cada letra ocorre dentro de 
um arquivo texto. Ignore as letras com acento. O usuário deverá informar o nome do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

void FillAlphabet(char *alphabetAa);

int main(){

    FILE *SearchFile;
    int Vetor[52] = {0};
    char Alphabet[52], FileName[20];

    FillAlphabet(Alphabet);

    printf("Digite o nome do arquivo para contagem: ");
    scanf("%s", FileName);

    SearchFile = fopen(FileName, "r");
    if(SearchFile == NULL){
        perror("Erro: ");
        exit(1);
    }

    char c;
    while((c = fgetc(SearchFile)) != EOF){
        for(int i = 0; i <= 52; i++){
            if(c == Alphabet[i]){
                Vetor[i]++;
            }
        }
    }

    for(int i = 0; i < 52; i++){
        printf("%c aparece %d vezes.", Alphabet[i], Vetor[i]);
    }

    fclose(SearchFile);
    SearchFile = NULL;

    return 0;
}

void FillAlphabet(char *alphabetAa){
    int Index = 0;
    for(int i = 65; i <= 90; i++){
        alphabetAa[Index] = i;
        Index++;
    }
    for(int i = 97; i <= 122; i++){
        alphabetAa[Index] = i;
        Index++;
    }
}
/* 9-Escreva uma função que receba como parâmetro o nome de um arquivo texto e retorne quantas
vogais esse arquivo possui. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VowelCounter(FILE *CountFile);

int main(){

    int NumberOfVowels;
    FILE *Alphabet = fopen("arq1.txt", "r");
    if(Alphabet == NULL){
        perror("Erro: ");
        exit(1);
    }

    NumberOfVowels = VowelCounter(Alphabet);

    printf("No arquivo existem %d vogais.\n", NumberOfVowels);

    fclose(Alphabet);
    Alphabet = NULL;

    return 0;
}

int VowelCounter(FILE *CountFile){
    int NumberOfVowels;
    char ReadCharacter, Vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'}; //AaEeIiOoUu
    while((ReadCharacter = getc(CountFile)) != EOF){
        if(ReadCharacter == 'a' || ReadCharacter == 'A' ||
            ReadCharacter == 'e' || ReadCharacter == 'E' ||
            ReadCharacter == 'i' || ReadCharacter == 'I' ||
            ReadCharacter == 'o' || ReadCharacter == 'O' ||
            ReadCharacter == 'u' || ReadCharacter == 'U'){
            NumberOfVowels++;
        }
    }
    return NumberOfVowels;
}
/*
Conteúdo do arquivo que realizei os testes

a b c d e f
g h i j k l
m n o p q r
s t u v x w
y z

*/
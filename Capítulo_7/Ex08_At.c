/* 8-Construa um programa que leia duas strings do teclado. Imprima uma mensagem 
informando se a segunda string está contida dentro da primeira. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[20], str2[20], aux[20];
    int i, j;

    printf("Digite a primeira string: ");
    fgets(str1, 20, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 20, stdin);

    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';

    for( i = 0, j = 0; str1[i] != '\0'; i++){
        while(str1[i] != ' ' && str1[i] != '\0'){
            aux[j] = str1[i];
            i++;
            j++;
        }
        aux[j] = '\0';
        if(strcmp(aux, str2) == 0){
            printf("String 2 está dentro da strin 1.\n");
            return 0;
        }else{
            j = 0;
        }
    }
    printf("A string 2 não está dentro da string 1.\n");

    return 0;
}
/* 7-Elabore uma função que receba duas strings como parâmetros everifique se a 
segunda ocorre dentro da primeira. Use aritmética de ponteiros para acessar os 
caracteres das strings */

//Adaptação do exercício 8 do capítulo 7

#include <stdio.h>
#include <string.h>

int verifica_string(char *str1, int szmx1, char *str2, int szmx2);

int main(){

    char str1[20], str2[20];

    printf("Digite a primeira string: ");
    fgets(str1, 20, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 20, stdin);

    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';

    verifica_string(str1, 20, str2, 20);

    return 0;
}

int verifica_string(char *str1, int szmx1, char *str2, int szmx2){
    int i, j;
    char aux[20];
    for( i = 0, j = 0; *(str1+i) != '\0'; i++){
        while(*(str1+i) != ' ' && *(str1+i) != '\0'){
            *(aux+j) = *(str1+i);
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
}
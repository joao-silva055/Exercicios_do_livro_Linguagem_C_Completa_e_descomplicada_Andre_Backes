/* 7-Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um 
palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida 
tanto da direita para a esquerda quanto da esquerda para a direita. Exemplos: ovo, arara, 
rever, asa, osso etc. */

#include <stdio.h>
#include <string.h>

int main(){

    char str1[20], str2[20], troca;
    int verificador = 0, tamanho_str2 = 0;

    printf("Digite uma palavra qualquer: ");
    fgets(str1, 20, stdin);

    strcpy(str2, str1);

    tamanho_str2 = strlen(str1)-2;

    for(int i = 0; i < tamanho_str2; i++, tamanho_str2--){
        troca = str2[i];
        str2[i] = str2[tamanho_str2];
        str2[tamanho_str2] = troca;
    }

    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            verificador++;
        }
    }

    if(verificador != 0){
        printf("A palavra digitada não é um palindromo.\n");
    }else{
        printf("A palavra digitada é um palindromo.\n");
    }

    return 0;
}
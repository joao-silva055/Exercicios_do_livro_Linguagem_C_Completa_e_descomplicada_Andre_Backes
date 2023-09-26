/* 10-Escreva uma função que receba uma string e retorne se ela é um palíndromo (1) ou 
não (0). Um palindromo é uma palavra que tem a propriedade de poder ser lida tanto da 
direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, 
asa, osso etc. */

#include <stdio.h>
#include <string.h>

int palindromo(char str1[], int szmax){
    char str2[szmax];
    int ctd1, verificador = 0, j = 0;

    for(int i = strlen(str1) - 1; i >= 0; i--, j++){
        str2[j] = str1[i];
    }
    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] == str2[i]){
            verificador++;
        }
    }
    if(verificador == strlen(str1)){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    char str[20];
    printf("Digite uma palavra: ");
    scanf("%s", str);

    if(palindromo(str, 20)){
        printf("A palavra digitada é um palíndromo.\n");
    }else{
        printf("A palavra digitada não é um palíndromo.\n");
    }

    return 0;
}

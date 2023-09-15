/* 15-Ecreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem 
em que elas apareceriam em um dicionário. */

#include <stdio.h>

int main(){

    char str1[20], str2[20];

    printf("Digite uma string qualquer: ");
    fgets(str1, 20, stdin);
    printf("Digite outra string qualquer: ");
    fgets(str2, 20, stdin);

    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] < str2[i]){
            printf("%s\n%s", str1, str2);
            return 0;
        }else{
            if(str1[i] > str2[i]){
                printf("%s%s", str2, str1);
                return 0;
            }else{
                continue;
            }
        }
    }

    return 0;
}
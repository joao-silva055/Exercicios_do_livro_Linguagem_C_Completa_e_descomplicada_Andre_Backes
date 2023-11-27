/* 8-Construa um programa que leia duas strings do teclado. Imprima uma mensagem 
informando se a segunda string está contida dentro da primeira. */

#include <stdio.h>
#include <string.h>
#define MAX_STR 50

int main(){

    char str1[MAX_STR], str2[MAX_STR];

    printf("Digite a 1ª string: ");
    fgets(str1, MAX_STR, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    printf("Digite a 2ª string: ");
    fgets(str2, MAX_STR, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int ctt = 0, flag = 0;
    for(int i = 0; str1[i]!='\0'; i++){
        if(str2[0] == str1[i] && flag == 0){
            for(int j = 0; j < strlen(str2); j++){
                if((str2[j] == str1[j+i]) && (flag == 0)){
                    ctt++;
                }else{
                    ctt = 0;
                }
                if(ctt == strlen(str2)){
                    flag++;
                }
            }
        }
    }

    if(ctt == strlen(str2)){
        printf("String 2 aparece dentro de string 1.\n");
    }else{
        printf("String 2 não aparece dentro de string 1.\n");
    }

    return 0;
}

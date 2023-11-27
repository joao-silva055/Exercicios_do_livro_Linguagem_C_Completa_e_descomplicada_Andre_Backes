/* 9-Construa um programa que leia duas strings do teclado. Imprima uma mensagem 
informando quantas vezes a segunda string lida está contida dentro da primeira. */

#include <stdio.h>
#include <string.h>
#define MAX_STR 100

int main(){

    char str1[MAX_STR], str2[MAX_STR], aux[MAX_STR];

    printf("Digite a 1ª string: ");
    fgets(str1, MAX_STR, stdin);
    printf("Digite a 2ª string: ");
    fgets(str2, MAX_STR, stdin);
    
    //Remoção do caractere '\n' (New Line) lido pelo fgets()
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int ctt = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        if(str2[0] == str1[i]){
            for(int j = 0; j < strlen(str2); j++){
                aux[j] = str1[j+i];
            }
            if(!strcmp(aux, str2)){
                ctt++;
            }
        }
    }

    printf("A string 2 está presente %d vezes dentro da string 1.\n", ctt);

    return 0;
}

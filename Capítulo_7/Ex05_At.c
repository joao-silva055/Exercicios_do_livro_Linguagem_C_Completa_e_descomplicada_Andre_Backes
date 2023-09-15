/* 5-Faça um programa que leia uma string e a inverta. A string invertida deve ser 
armazenada na mesma variavél. Em seguida, imprima a string invertida. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[20], troca_posicao;
    int limite;
    
    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    limite = strlen(str)-2;

    for(int i = 0; i < limite; i++, limite--){
        troca_posicao = str[i];
        str[i] = str[limite];
        str[limite] = troca_posicao;
    }

    printf("%s", str);

    return 0;
}
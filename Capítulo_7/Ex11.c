/* 11-Escreva um programa que leia uma string do teclado e converta todos os seus 
caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90. */

#include <stdio.h>

int main(){

    char str[20];

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }
    }

    printf("%s", str);

    return 0;
}
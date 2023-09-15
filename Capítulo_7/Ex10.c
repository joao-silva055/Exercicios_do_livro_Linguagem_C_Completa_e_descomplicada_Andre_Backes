/* 10-Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: Subtraia 32 dos carcteres cujo código  ASCII está entre 
97 e 122 */

#include <stdio.h>

int main(){

    char str[20];

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}
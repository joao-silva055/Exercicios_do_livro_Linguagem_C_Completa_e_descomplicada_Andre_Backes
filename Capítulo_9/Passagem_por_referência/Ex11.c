/* 11-Escreva uma função que receba uma string e converta todos os seus caracteres em 
maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122. */

#include <stdio.h>

void converte_p_maiuscula(char str1[]){
    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] >= 97 && str1[i] <= 122){
            str1[i] -= 32;
        }
    }
}

int main(){

    char str[20];

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    converte_p_maiuscula(str);

    printf("%s", str);

    return 0;
}
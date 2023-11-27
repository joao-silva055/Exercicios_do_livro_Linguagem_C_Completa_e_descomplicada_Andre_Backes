/* 5-Faça um programa que leia uma string e a inverta. A string invertida deve ser 
armazenada na mesma variavél. Em seguida, imprima a string invertida. */

#include <stdio.h>
#include <string.h>

int main(){

    char str[20], swap;
    
    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    //Exclui a constante \n (New line) lida pelo comando fgets e 
    //inclui o caractere especial \0 para indicar o fim da string.
    str[strcspn(str, "\n")] = '\0';

    int j = strlen(str) - 1;
    for(int i = 0; i < j; i++, j--){
        swap = str[i];
        str[i] = str[j];
        str[j] = swap;
    }

    printf("String invertida: %s\n", str);

    return 0;
}
//O código não funciona corretamente caso haja alguma letra acentuada.

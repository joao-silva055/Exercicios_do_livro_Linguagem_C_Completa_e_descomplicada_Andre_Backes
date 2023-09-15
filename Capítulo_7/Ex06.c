/* 6-Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre
com um caractere (Vogal ou consoante) e substitua todas as vogais da palavra dada por 
esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui. */

#include <stdio.h>

int main(){

    char str[20], substitui_vogais;
    int qtvogais = 0;

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            qtvogais++;
        }
    }

    printf("Sua string possui %d vogais.\n", qtvogais);
    printf("Digite uma vogal ou consoante para substituir as vogais presentes na string digitada: ");
    substitui_vogais = getchar();

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = substitui_vogais;
        }
    }
    printf("A palavra formatada fica da seguinte forma: %s", str);
    
    return 0;
}
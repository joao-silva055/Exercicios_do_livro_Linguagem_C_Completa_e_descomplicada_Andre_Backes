/* 12-Escreva uma função recursiva que receba um valor inteiro em base decimal e o retorne
em base binária. */

#include <stdio.h>

void convertedecimal(int n){
    if(n == 1){
        printf("%d", n%2);
        return;
    }
    convertedecimal(n / 2);
    printf("%d", n%2);
}

int main(){

    int n;
    printf("Digite um valor para converter em binário: ");
    scanf("%d", &n);

    convertedecimal(n);

    printf("\n");

    return 0;
}
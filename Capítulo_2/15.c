/* 15-Escreva um programa que leia três variáveis: char, int e float. Em seguida, 
imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação 
horizontal e uma em cada linha. Use um unico comando printf() para cada operação 
de escrita das três variáveis. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char x;
    int y;
    float z;

    scanf("%c", &x);
    scanf("%d", &y);
    scanf("%f", &z);

    printf("%c %d %f \n", x, y, z);
    printf("%c\t%d\t%f \n", x, y, z);
    printf("%c\n%d\n%f \n", x, y, z);

    return 0;
}
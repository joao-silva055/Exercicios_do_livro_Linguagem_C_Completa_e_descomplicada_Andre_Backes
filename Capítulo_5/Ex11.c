/* 11-Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: 
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */

#include <stdio.h>


int main(){

    int num;

    do{
        printf("Digite um valor positivo: ");
        scanf("%d", &num);
    }while(num < 0);

    printf("DIVISORES DE %d:\n", num);
    for(int i = 1; i <= num; i++){
        if(num%i == 0){
            printf("%d  ", i);
        }
    }
    printf("\n");

    return 0;
}
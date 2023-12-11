/* 3-Crie uma função recursiva que receba um número inteiro N e imprima todos os números 
naturais de 0 até N em ordem crescente */

#include <stdio.h>
#include <stdlib.h>

void Print_in_ascending_order(int n){
    //Caso base
    if(n == 0){
        printf("%d\n", n);
    }else{
        //Interrompe a primeira chamada chamada
        //Inicio do loop
        Print_in_ascending_order(n - 1);
        //Só será executado depois de descarregar toda memória voltando a primeira chamada
        printf("%d\n", n);
    }
}

int main(){

    int value;

    printf("Digite um valor: ");
    scanf("%d", &value);

    Print_in_ascending_order(value);

    return 0;
}

/* 10-Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números 
naturais que não são multiplos de 7. Ao final, imprima esse vetor na tela. */

#include <stdio.h>

int main(){

    int vetor[100], verificador = 0, cont = 100;

    for(int i = 0; i < cont; i++){
        if(i%7 == 0){
            cont++;
            verificador--;
        }else{
            vetor[verificador] = i;
        }
        verificador++;
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    return 0;
}
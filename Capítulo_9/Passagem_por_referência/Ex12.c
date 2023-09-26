/* 12-Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. 
Essa função deve retornar, por referência, dois valores: a soma dos números pares e 
ímpares. */

#include <stdio.h>

void soma_par_impar(int v[], int szmax, int *sp, int *si){
    for(int i = 0; i < szmax; i ++){
        if(v[i]%2 == 0){
            *sp += v[i];
        }
        if(v[i]%2 != 0){
            *si += v[i];
        }
    }
}

int main(){

    int soma_par = 0, soma_impar = 0;
    int vetor[] = {12, 15, 19, 23, 44, 14, 7, 6};
    
    soma_par_impar(vetor, 8, &soma_par, &soma_impar);

    printf("A soma dos valores pares é de: %d.\n", soma_par);
    printf("A soma dos valores impares é de: %d.\n", soma_impar);

    return 0;
}
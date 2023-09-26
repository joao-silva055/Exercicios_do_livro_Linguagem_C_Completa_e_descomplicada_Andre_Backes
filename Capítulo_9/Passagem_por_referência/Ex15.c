/* 15-Elabore uma função que receba um vetor contendo N valores e retorne por referência
o maior e o menor elemento desse vetor. */

#include <stdio.h>

void maior_menor(int v[], int szmax, int *maior, int *menor){
    int troca;
    for(int i = 0; i < szmax; i++){
        if(*maior < v[i]){
            *maior = v[i];
        }
        if(*menor > v[i]){
            *menor = v[i];
        }
    }
}

int main(){

    int vetor[] = {25, 84, -12, 10, 19, 72, 34, 52, 69, 2};
    int maior_v, menor_v; 

    maior_v = vetor[0];
    menor_v = vetor[0];
    maior_menor(vetor, 10, &maior_v, &menor_v);

    printf("O maior valor presente no vetor é %d.\n", maior_v);
    printf("O menor valor presente no vetor é %d.\n", menor_v);

    return 0;
}
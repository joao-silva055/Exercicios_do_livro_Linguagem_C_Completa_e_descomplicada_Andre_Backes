/* 5-Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros. */

#include <stdio.h>

int soma_vetor_recursivo(int v[], int szmax){
    if(szmax == 0){
        return v[0];
    }
    return v[szmax] + soma_vetor_recursivo(v, --szmax);
}

int main(){

    int vetor[] = {1, 3, 5, 5, 9, 8, 4, 6, 9, 2};

    printf("A soma dos elementos do vetor é %d.\n", soma_vetor_recursivo(vetor, 9));

    return 0;
}
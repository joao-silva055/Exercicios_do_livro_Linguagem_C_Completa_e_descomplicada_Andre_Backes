/* 13-Crie uma função que receba um vetor de tamanho N e ordene seus valores. */

#include <stdio.h>

void ordena_vetor(int v[], int szmax){
    int troca;
    for(int i = 0; i < szmax; i++){
        for(int j = i+1; j < szmax; j++){
            if(v[i] > v[j]){
                troca = v[i];
                v[i] = v[j];
                v[j] = troca;
            }
        }
    }
}

int main(){

    int vetor[] = {51, 26, 13, 18, 96, 18, 10, 2, 0, 16};

    ordena_vetor(vetor, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
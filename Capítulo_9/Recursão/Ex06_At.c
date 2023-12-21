/* 6-Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros */

#include <stdio.h>

float media_vetor_recursivo(int *v, int szmax, int cttn){
    float soma;
    if(szmax == 0){
        return (float)v[szmax] / cttn;
    }
    soma = (float)v[szmax] / cttn;
    return soma + media_vetor_recursivo(v, szmax-1, cttn);
}

int main(){

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float media;

    media = media_vetor_recursivo(vetor, 9, 10);

    printf("A media dos elementos do vetor é %.2f.\n", media);

    return 0;
}

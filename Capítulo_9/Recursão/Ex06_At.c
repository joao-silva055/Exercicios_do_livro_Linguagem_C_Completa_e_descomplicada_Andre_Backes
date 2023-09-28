/* 6-Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros */

#include <stdio.h>

float media_vetor_recursivo(float *v, int szmax, int cttn){
    float soma;
    if(szmax == 0){
        return (float)v[szmax] / cttn;
    }
    soma = (float)v[szmax] / cttn;
    return soma + media_vetor_recursivo(v, szmax-1, cttn);
}

int main(){

    float vetor[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float media;

    media = media_vetor_recursivo(vetor, 9, 10);

    printf("A media dos elementos do vetor é %.2f.\n", media);

    return 0;
}
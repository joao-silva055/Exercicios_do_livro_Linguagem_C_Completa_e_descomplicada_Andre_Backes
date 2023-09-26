/* 16-Elabore uma função que receba um vetor contendo N valores e retorne por referência
o maior elemento do vetor e o número de vezes que esse elemento ocorreu no vetor. */


#include <stdio.h>

void contagem_maior_valor(int v[], int  szmax, int *ctd, int *m){
    for(int i = 0; i < szmax; i++){
        if(*m < v[i]){
            *m = v [i];
        }
    }
    for(int i = 0; i < szmax; i++){
        if(*m == v[i]){
            *ctd = *ctd + 1;
        }
    }
}

int main(){

    int vetor[] = {6, 26, 86, 96, 16, 96, 46, 36, 96, 16};
    int ctd_maior = 0, maior;

    maior = vetor[0];
    contagem_maior_valor(vetor, 10, &ctd_maior, &maior);

    printf("O maior valor presente no vetor é %d.\n", maior);
    printf("Esse mesmo valor aparece %d vezes no vetor.\n", ctd_maior);

    return 0;
}
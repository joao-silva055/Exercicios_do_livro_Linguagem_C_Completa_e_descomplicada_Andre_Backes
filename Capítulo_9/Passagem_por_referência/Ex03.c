/* 3-Escreva uma função que receba um array de 10 elementos e retorne sua soma. */

#include <stdio.h>

int retorna_soma_array(int *a, int e){
    int s = 0;
    for(int i = 0; i < e; i++){
        s += a[i];
    }
    return s;
}

int main(){

    int array[10], soma;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor na posição [%d]: ", i);
        scanf("%d", &array[i]);
    }

    soma = retorna_soma_array(array, 10);

    printf("A soma dos elementos do array é de %d.\n", soma);

    return 0;
}
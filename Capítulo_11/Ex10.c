/* 10-Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne 
o ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter seus 
elementos preenchidos com certo valor, também passado por parâmetro. Se N for negativo 
ou igual a zero, um ponteiro nulo deverá ser retornado. */

#include <stdio.h>
#include <stdlib.h>

int* retornaptr(int n, int valor){
    int *v;
    if(n <= 0){
        printf("Erro. Valor inválido para n!\n");
        return v = NULL;
    }

    printf("Digite o valor que ira preencher o vetor: ");
    scanf("%d", &valor);

    v = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        *(v+i) = valor;
    }

    return v;
}

int main(){

    int n, *vetor, valor;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("Erro. Memória Insuficiente!\n");
        exit(1);
    }else{
        vetor = retornaptr(n, valor);
    }

    for(int i = 0; i < n; i++){
        printf("[%d] ", *(vetor+i));
    }printf("\n");

    free(vetor);
    vetor = NULL;

    return 0;
}
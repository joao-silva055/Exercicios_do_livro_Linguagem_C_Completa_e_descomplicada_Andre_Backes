/* 5-Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for 
inválido, o usuário deverá digitar outro até que ele seja valido (ou seja, positivo). 
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá
ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vetor;
    printf("Digite o valor de n: ");
    do{
        scanf("%d", &n);
        if(n < 0){
            printf("N precisa ser um valor inteiro positivo: ");
        }
    }while(n <= 0);

    vetor = (int *) calloc(n, sizeof(int));

    if(vetor == NULL){
        printf("Erro. Memória Insuficiente!");
    }else{
        for(int i = 0; i < n; i++){
            printf("Valor do vetor na posição [%d]: ", i);
            do{
                scanf("%d", (vetor+i));
                if(*(vetor+i) < 2){
                    printf("O valor deve ser igual ou maior do que 2: ");
                }
            }while(*(vetor+i) < 2) ;
        }
    }

    free(vetor);
    vetor = NULL;

    return 0;
}
/* 10-Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os dois primeiros 
números são as dimenções da matriz (linha e coluna), enquanto o restante dos números são os 
valores de cada elemento da matriz. Escreva uma função que receba o nome do arquivo e retorne 
o ponteiro para uma matriz alocada dinamicamente contendo os valores lidos do arquivo. */

#include <stdio.h>
#include <stdlib.h>

int* ReturnsPointerToArray(FILE *fp){

    int Lines, Columns, *Pointer, Size;
    fscanf(fp, "%d %d", &Lines, &Columns);
    Pointer = (int*) malloc((Lines*Columns) * sizeof(int));
    for(int i = 0; i < (Lines*Columns); i++){
        fscanf(fp, "%d", &*(Pointer+i));
    }

    return Pointer;
}

int main(){

    int *Matriz;
    FILE *ArrayElements = fopen("arq1.txt", "r");
    if(ArrayElements == NULL){
        perror("Erro: ");
        exit(1);
    }

    Matriz = ReturnsPointerToArray(ArrayElements);

    rewind(ArrayElements);
    int Lines, Columns;
    fscanf(ArrayElements, "%d %d", &Lines, &Columns);

    printf("Conteudo do arquivo: \n");
    for(int i = 0; i < (Lines*Columns); i++){
        printf("[%d] ", *(Matriz+i));
    }printf("\n");

    fclose(ArrayElements);
    ArrayElements = NULL;

    return 0;
}
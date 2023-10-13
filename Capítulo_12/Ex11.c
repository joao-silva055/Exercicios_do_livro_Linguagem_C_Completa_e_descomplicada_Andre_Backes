/* 11-Escreva uma função que receba uma matriz e seu tamanho como parâmetros e salve-a em um 
arquivo texto de nome "matriz.txt". Cada linha da matriz deve ser salvo em uma linha do arquivo. */

#include <stdio.h>
#include <stdlib.h>

void SaveMatrixToFile(int *Matriz, int Lines, int Columns){
    FILE *MatrizFile = fopen("matriz.txt", "w");
    if(MatrizFile == NULL){
        perror("Erro: ");
        exit(1);
    }
    for(int i = 0; i < Lines; i++){
        for(int j = 0; j < Columns; j++){
            fprintf(MatrizFile, "%d ", Matriz[i * Columns + j]);
        }
        fprintf(MatrizFile, "%c", '\n');
    }

    fclose(MatrizFile);
    MatrizFile = NULL;
}

int main(){

    int Matriz[][3] = {{1, 2 , 3}, {4, 5, 6}, {7, 8, 9}};

    SaveMatrixToFile(&Matriz[0][0], 3, 3);

    return 0;
}
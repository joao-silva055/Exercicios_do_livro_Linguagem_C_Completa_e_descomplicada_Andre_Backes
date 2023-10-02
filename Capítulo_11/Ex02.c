/* 2- Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve 
conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um 
programa que mostre o tamanho em byte desse estrutura. */

#include <stdio.h>
#include <stdlib.h>

struct st_cadAluno{
    int matricula;
    char nome[20];
    float notas[3];
}aluno;

int main(){

    printf("Bytes ocupados por struct st_cadAluno: %ld\n", sizeof(struct st_cadAluno));

    return 0;
}
/* 10-Leia uma matriz de tamanho 10x3 com as notas de 10 alunos em três provas. 
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova  
1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota 
foi na prova 3. */

#include <stdio.h>
#define linha 10
#define coluna 3

int main(){

    float notas[linha][coluna], menor;
    int pnp1 = 0, pnp2 = 0, pnp3 = 0, indice = 0, aluno = 1;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite a nota do %dº aluno: ", aluno);
            scanf("%f", &notas[i][j]);
        }
        aluno++;
        printf("-----------------------------\n");
    }

    for(int i = 0; i < linha; i++){
        menor = notas[i][0];
        for(int j = 1; j < coluna; j++){
            if(notas[i][j] < menor){
                menor = notas[i][j];
                indice = j;
            }
        }
        switch(indice){
            case 0:
                pnp1++;
            break;
            case 1:
                pnp2++;
            break;
            case 2:
                pnp3++;
            break;
        }
    }

    printf("-Piores notas da 1ª prova: %d-\n", pnp1);
    printf("-Piores notas da 2ª prova: %d-\n", pnp2);
    printf("-Piores notas da 3ª prova: %d-\n", pnp3);

    return 0;
}

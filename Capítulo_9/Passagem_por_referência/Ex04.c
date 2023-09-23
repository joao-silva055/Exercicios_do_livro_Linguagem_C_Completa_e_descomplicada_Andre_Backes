/* 4-Escreva uma função que receba um array contendo a nota de 10 alunos e retorne a 
média dos alunos. */

#include <stdio.h>

float calcula_media(float *n, int e){
    float m = 0;
    for(int i = 0; i < e; i++){
        m += (float)n[i];
    }
    return (m/10.0);
}

int main(){

    float media, notas[10];

    for(int i = 0; i < 10; i++){
        printf("Digite a nota do %d° aluno: ", i+1);
        scanf("%f", &notas[i]);
    }

    media = calcula_media(notas, 10);

    printf("A média das notas digitadas é de %.4f.\n", media);

    return 0;
}
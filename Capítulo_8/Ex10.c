/* 10-Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os 
dados de cinco atletas e exiba por ordem de idade, do mais velho para o mais novo. */

#include <stdio.h>
#define MAX 3

struct st_atleta{
    char nome[50];
    char esporte[50];
    int idade, altura;
}atletas[MAX], aux;

int main(){

    for(int i = 0; i < MAX; i++){
        printf("*****%dº ATLETA*****\n", i+1);
        printf("Nome: ");
        fgets(atletas[i].nome, 50, stdin);
        printf("Esporte: ");
        fgets(atletas[i].esporte, 50, stdin);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Altura(cm): ");
        scanf("%d", &atletas[i].altura);
        setbuf(stdin, NULL);
    }

    for(int i = 0; i < MAX-1; i++){
        for(int j = 1; j < MAX; j++){
            if(atletas[i].idade < atletas[j].idade){
                aux = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = aux;
            }
        }
    }
    printf("\nORDEM DECRESCENTE DE IDADES\n");
    for(int i = 0; i < MAX; i++){
        printf("ATLETA: %sIDADE: %d\n", atletas[i].nome, atletas[i].idade);
        printf("================\n");
    }

    return 0;
}
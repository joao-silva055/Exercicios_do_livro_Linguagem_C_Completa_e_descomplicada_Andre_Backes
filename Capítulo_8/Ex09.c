/* 9-Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, 
seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. 
Calcule e exiba os nomes do atleta mais alto e do mais velho. */

#include <stdio.h>
#define MAX 5

struct st_atleta{
    char nome[50];
    char esporte[50];
    int idade, altura;
}atletas[MAX];

int main(){

    int at_maisvelho, at_maisalto;
    int id_maisvelho = 0, id_maisalto = 0;

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

    at_maisalto = atletas[0].altura;
    at_maisvelho = atletas[0].idade;

    for(int i = 1; i < MAX; i++){
        if(at_maisvelho < atletas[i].idade){
            id_maisvelho = i;
        }
        if(at_maisalto < atletas[i].altura){
            id_maisalto = i;
        }
    }

    printf("\nATLETA MAIS ALTO: %s", atletas[id_maisalto].nome);
    printf("ATLETA MAIS VELHO: %s\n", atletas[id_maisvelho].nome);

    return 0;
}
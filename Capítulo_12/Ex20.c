/* 20-Considerando a estrutura atleta do exercício anterior, escreva um programa que leia um 
arquivo binário contendo os dados de cinco atletas. Calcule e exiba o nome do atleta mais alto 
e do mais velho. */

#include <stdio.h>
#include <stdlib.h>
#define TotalNumberOfAthletes 5

struct ST_Athlete{
    char name[20];
    char sport[20];
    int Age;
    int height;
}Athlete[TotalNumberOfAthletes];

int main(){

    int TallestAthlet, OldestAthlete, IndexTA, IndexOA;
    FILE *AthleteData = fopen("Athlete.bin", "rb");
    if(AthleteData == NULL){
        perror("Erro: ");
        exit(1);
    }


    fread(&Athlete, sizeof(struct ST_Athlete), 5, AthleteData);

    TallestAthlet = Athlete[0].height;
    OldestAthlete = Athlete[0].Age;

    for(int i = 0; i < TotalNumberOfAthletes; i++){
        if(TallestAthlet < Athlete[i].height){
            TallestAthlet = Athlete[i].height;
            IndexTA = i;
        }
        if(OldestAthlete < Athlete[i].Age){
            OldestAthlete = Athlete[i].Age;
            IndexOA = i;
        }
    }

    printf("O(A) atleta mais alto(a) é o(a) %s", Athlete[IndexTA].name);
    printf("O(A) atleta mais velho(a) é o(a) %s", Athlete[IndexOA].name);

    fclose(AthleteData);
    AthleteData = NULL;

    return 0;
}
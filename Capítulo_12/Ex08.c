/* 8-Dado um arquivo contendo um conjunto de nomes e datas de nascimento (dia, mês e ano, isto é,
três inteiros seguidos), escreve um programa que leia esse arquivo e data atual e gere outro 
arquivo contendo o nome e idade. */

#include <stdio.h>
#include <stdlib.h>

struct ST_CurrentDate{
    int Day, Mounth, Year;
}CurrentDate;

struct ST_DateOfBirth{
    int Day, Mounth, Year;
}DateOfBirth;

int ReturnAge(struct ST_DateOfBirth DateOfBirth, struct ST_CurrentDate CurrentDate);

int main(){
    
    char Name[20];
    FILE *NameAndBirth = fopen("arq1.txt", "r");
    if(NameAndBirth == NULL){
        perror("Erro: ");
        exit(1);
    }
    FILE *NameAndAge = fopen("arq2.txt", "w");
    if(NameAndAge == NULL){
        perror("Erro: ");
        exit(1);
    }

    printf("Digite a data atual dd/mm/aaaa: ");
    scanf("%d/%d/%d", &CurrentDate.Day, &CurrentDate.Mounth, &CurrentDate.Year);

    int Age;
    while(!feof(NameAndBirth)){
        if(feof(NameAndBirth)){
            break;    
        }
        fscanf(NameAndBirth, "%s %d/%d/%d", Name, &DateOfBirth.Day, &DateOfBirth.Mounth, &DateOfBirth.Year);
        Age = ReturnAge(DateOfBirth, CurrentDate);
        fprintf(NameAndAge, "%s %d\n", Name, Age);
    }

    fclose(NameAndBirth);
    NameAndBirth == NULL;
    fclose(NameAndAge);
    NameAndAge == NULL;

    return 0;
}

int ReturnAge(struct ST_DateOfBirth DateOfBirth, struct ST_CurrentDate CurrentDate){
    int Age = (CurrentDate.Year - DateOfBirth.Year);

    if(CurrentDate.Mounth < DateOfBirth.Mounth){
        return --Age;
    }else if(CurrentDate.Mounth > DateOfBirth.Mounth){
        return Age;
    }else if(CurrentDate.Mounth == DateOfBirth.Mounth){
        if(CurrentDate.Day < DateOfBirth.Day){
            return --Age;
        }else if(CurrentDate.Day > DateOfBirth.Day){
            return ++Age;
        }else{
            return Age;
        }
    }
}
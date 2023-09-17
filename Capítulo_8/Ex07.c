/* 7-Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, 
minutos e segundos. Agora escreva um programa que leia um vetor de cinco posições dessa 
estrutura e imprima a maior hora */

#include <stdio.h>
#include <math.h>

struct hora{
    int horas, minutos, segundos;
}st_horas[5];

int main(){

    int maior_hora = 0, id, total_segundos = 0;

    for(int i = 0; i < 5; i++){
        do{
            printf("=========%dº TEMPO=========\n", i+1);
            printf("Hora: ");
            scanf("%d", &st_horas[i].horas);
            printf("Minutos: ");
            scanf("%d", &st_horas[i].minutos);
            printf("Segundos: ");
            scanf("%d", &st_horas[i].segundos);
        /*Aqui verificamos se os valores digitados são um horário válido. 
        Caso não seja, o programa pedira para digitar novamente.*/
        }while((st_horas[i].horas < 0 || st_horas[i].horas > 23)||
        (st_horas[i].minutos < 0 || st_horas[i].minutos > 60)||
        (st_horas[i].segundos < 0 || st_horas[i].segundos > 60));

        /*Aqui transformamos tudo em segundos para vermos qual o maior horário digitado.
        Isso serve para caso haja valores com horas repetidas. */
        total_segundos = (st_horas[i].horas*60*60)+(st_horas[i].minutos*60)+(st_horas[i].segundos);
        if(maior_hora < total_segundos){
            maior_hora = total_segundos;
            id = i;
        }
    }

    printf("===Maior tempo digitado===\n");
    printf("\t%d:%d:%d(24h)\n", st_horas[id].horas, st_horas[id].minutos, st_horas[id].segundos);

    return 0;
}
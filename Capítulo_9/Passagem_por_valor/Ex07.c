/* 7-Elabore uma função que receba três números inteiros como parâmetro, representando
horas, minutos e segundos. A função deve retornar esse horario convertido em segundos. */

#include <stdio.h>

int calcula_segundos(int h, int m, int s){
    int tot_seg;

    tot_seg = (h*60*60)+(m*60)+s;

    return tot_seg;
}

int main(){

    int horas, minutos, segundos, total_seg;

    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    total_seg = calcula_segundos(horas, minutos, segundos);

    printf("O total de segundos é de %d.\n", total_seg);

    return 0;
}
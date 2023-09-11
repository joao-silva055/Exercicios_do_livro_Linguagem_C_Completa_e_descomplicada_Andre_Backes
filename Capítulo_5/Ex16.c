/* 16-Em matemática, o número harmônico designado por Hn define-se como enésimo 
termo da série harmônica. Ou seja: Hn = 1 + (1/2)+(1/3)+(1/4) + (1/n) 
Apresente um programa que calcule o valor de qualquer Hn. */

#include <stdio.h>

int main(){

    float hn;
    int enesimo;

    do{
        printf("Digite o enésimo termo da séria harmônica: ");
        scanf("%d", &enesimo);
    }while(enesimo <= 0);

    for(int i = 1; i <= enesimo; i++){
        if(i == 1){
            hn = 1;
            continue;
        }
        hn = hn + 1.0/(float)i;
    }

    printf("%.2f\n", hn);

    return 0;
}
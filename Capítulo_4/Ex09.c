/* 9-Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.  
                                        PESO
ALTURA                   ATÉ 60                  61-90                 91+

Menor do que 1,20           A                      D                    G
1,20 - 1,70                 B                      E                    H
Maior do que 1,70           C                      F                    I */

#include <stdio.h>

int main(){

    float altura, peso;

    printf("Digite sua altura e seu peso respectivamente: ");
    scanf("%f %f", &altura, &peso);

    printf("\tClassificação\n");

    if(altura < 1.20){
        if(peso <= 60){
            printf("Categoria A\n");
        }else{
            if(peso > 60 && peso <= 90){
                printf("Categoria D\n");
            }else{
                if(peso > 90){
                    printf("Categoria G\n");
                }
            }
        }
    }else{
        if(altura >= 1.20 && altura <= 1.70){
            if(peso <= 60){
                printf("Categoria B\n");
            }else{
                if(peso > 60 && peso <= 90){
                    printf("Categoria E\n");
                }else{
                    if(peso > 90){
                        printf("Categoria H\n");
                    }
                }
            }
        }else{
            if(altura > 1.70){
                if(peso <= 60){
                    printf("Categoria C\n");
                }else{
                    if(peso > 60 && peso <= 90){
                        printf("Categoria F\n");
                    }else{
                        if(peso > 90){
                            printf("Categoria I\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}
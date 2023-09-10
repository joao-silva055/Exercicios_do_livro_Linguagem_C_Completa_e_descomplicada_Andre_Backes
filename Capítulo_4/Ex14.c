/* 14-Faça um programa para verificar se determinado número inteiro lido é 
divisivel por 3 ou 5, mas não simultaneamente pelos dois. */

#include <stdio.h>
#include <math.h>

int main(){

    int numero;

    printf("Digite um valor para verificação: ");
    scanf("%d", &numero);

    /*Aqui verificamos se o valor digitado é divisivel por 3 e 5 simultaneamente, 
    se sim, o programa encerra aqui, se nao, ele continua a verificação para 
    apresentar seu divisor */
    if(!(numero%3 == 0) || !(numero%5 == 0)){
        if(numero%3 == 0){
            printf("Valor divisivel por 3.\n");

        }else{
            if(numero%5 == 0){
                printf("Valor divisivel por 5.\n");
            }else{
                printf("Valor não é divisivel por 3 ou 5.\n");
            }
        }
    }

    return 0;
}
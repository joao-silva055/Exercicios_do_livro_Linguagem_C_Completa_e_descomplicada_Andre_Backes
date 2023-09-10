/* 4-Faça um programa que leia o sálario de um trabalhador e o valor da prestação
de um empréstimo. Se a prestação:
i. For maior que 20% imprima: "Empréstimo não concedido."
ii. Caso contrário, imprima "Empréstimo concedido." */

#include <stdio.h>

int main(){

    float salario, prestacao;

    printf("Digite o valor do salário R$ ");
    scanf("%f", &salario);
    printf("Digite o valor da prestção R$ ");
    scanf("%f", &prestacao);

    if(prestacao > (salario/100)*20){
        printf("Empréstimo não concedido.\n");
    }else{
        printf("Empréstimo concedido.\n");
    }

    return 0;
}
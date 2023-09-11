/* 15-Elabore um programa que faça a leitura de vários números inteiros até que 
se digite um número negativo. O programa tem que retornar o maior e o menor 
número lido. */

#include <stdio.h>

int main(){

    int numero, maior = 0, menor;

    printf("Digite um valor: ");
    scanf("%d", &numero);
    menor = numero;
    if(numero < 0){
        return 0;
    }

    do{
        printf("Digite um valor: ");
        scanf("%d", &numero);
        if(maior < numero){
            maior = numero;
        }
        if(numero < 0){
            goto fim;
        }
        //Pode-se inutilizar o bloco de comandos if acima (l24 à l26) e realizar a 
        //verificação (menor > numero && numero > -1) no if abaixo, para evitar que 
        //valores negativos sejam atribuidos na variável 'menor' ao termino do programa.
        if(menor > numero){
            menor = numero;
        }
    }while(numero >= 0);

    fim:
    printf("Maior valor lido %d.\nMenor valor lido %d.\n", maior, menor);

    return 0;
}
/* 2-Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos 
números de 1 a N. */

#include <stdio.h>
#include <stdlib.h>

int Recursive_Sum(int n){

    if(n == 1){
        return 1;
    }else{
        return n + RecursiveSum(n - 1);
    }

}

int main(){

    int value, sum;

    printf("Digite um valor: ");
    scanf("%d", &value);

    sum = RecursiveSum(value);

    printf("A soma dos valores de 1 até %d é de %d.\n", value, sum);

    return 0;
}

/* 11-Escreva uma função recursiva que receba um valor inteiro e o retorne invertido. 
Exemplo:
Número lido: 123
Número retornado: 321 */

// Créditos
// https://ifg-tads.forumeiros.com/t39-funcao-recursiva-que-permita-inverter-um-numero-inteiro-n
#include <stdio.h>
#include <math.h>

int inverteValor(int n){
    if(n==0){
      return n;
    }else{
        printf("%d", n % 10);
        n=n / 10;
        return inverteValor(n);
    }
    return 0;
}

int main(){

    int n, invertido;
    printf("Digite um valor: ");
    scanf("%d", &n);

    printf("O valor invertido é: ");
    inverteValor(n);
    printf("\n");

    return 0;
}

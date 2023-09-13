/* 13-Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. 
Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, 
caso o usuario digite um numero que já foi digitado, o programa deverá pedir a ele para 
digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no 
vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela
o vetor final que foi digitado. */

#include <stdio.h>

int main(){

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº valor de 10: ", i+1);
        scanf("%d", &vetor[i]);
        for(int j = 0; j < i; j++){
            if(vetor[j]==vetor[i]){
                i--;
                printf("Valor já digitado!\nTente novamente.\n");
            }
        }
    }

    printf("Valores digitados: \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
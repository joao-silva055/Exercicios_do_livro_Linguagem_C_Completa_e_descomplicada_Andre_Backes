/* 6-Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor. */

#include <stdio.h>

int main() {

  int vetor[10], cont_par = 0;

  for(int i = 0; i < 10; i++){
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < 10; i++){
    if(vetor[i]%2==0){
        cont_par++;
    }
  }

  printf("Foram digitados %d valores pares.\n", cont_par);
  
  return 0;
}
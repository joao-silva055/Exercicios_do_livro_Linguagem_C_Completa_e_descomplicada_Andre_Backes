/* 8-Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule 
e mostre na tela a quantidade de números negativos e a soma dos números positivos 
desse vetor. */

#include <stdio.h>

int main(void) {

  int vetor[10], cont_neg = 0, soma_pos = 0;

  for(int i = 0; i < 10; i++){
    printf("%dº valor: ", i + 1);
    scanf("%d", &vetor[i]);
    if(vetor[i] < 0){
      cont_neg++;
    }else{
      soma_pos += vetor[i];
    }
  }

  printf("Quantidade de negativos: %d.\n", cont_neg);
  printf("Soma dos positivs: %d.\n", soma_pos);
  
  return 0;
}
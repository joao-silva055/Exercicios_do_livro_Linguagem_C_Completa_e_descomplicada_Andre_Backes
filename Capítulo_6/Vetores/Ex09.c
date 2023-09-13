/* 9-Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros 
cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C. */

#include <stdio.h>

int main(void) {

  int a[10], b[10], c[10];

  for(int i = 0; i < 10; i++){
    printf("A[%d] ", i);
    scanf("%d", &a[i]);
    printf("B[%d] ", i);
    scanf("%d", &b[i]);
    c[i] = a[i] - b[i];
  }

  for(int i = 0; i < 10; i++){
    printf("%d ", c[i]);
  }
  printf("\n");
  
  return 0;
}
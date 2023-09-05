/* 4-Faça um programa que leia um número inteiro e depois o imprima usando o operador
"%f". Veja o que aconteceu. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    
    scanf("%d",&x);
    printf("%%f: %f",x);

    return 0;
}

/*SAIDA: 4.c: In function ‘main’:
4.c:11:19: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
   11 |     printf("%%f: %f",x);
      |                  ~^  ~
      |                   |  |
      |                   |  int
      |                   double
      |                  %d */
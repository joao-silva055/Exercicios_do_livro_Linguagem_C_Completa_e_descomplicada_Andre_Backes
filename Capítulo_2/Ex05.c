/* 5-Faça um programa que leia um valor do tipo float e depois o imprima usando o 
operador "%d". Veja oque aconteceu. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float x;
    
    scanf("%f",&x);
    printf("%%d: %d",x);

    return 0;
}

/*SAIDA: 5.c: In function ‘main’:
5.c:12:19: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
   12 |     printf("%%d: %d",x);
      |                  ~^  ~
      |                   |  |
      |                   |  double
      |                   int
      |                  %f */
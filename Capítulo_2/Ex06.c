/* 6-Faça um programa que leia um valor do tipo double e depois o imprima 
na forma de notação cíentifica. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    double x;
    
    scanf("%lf",&x);
    printf("Notação cíentifica: %E\n",x);

    return 0;
}
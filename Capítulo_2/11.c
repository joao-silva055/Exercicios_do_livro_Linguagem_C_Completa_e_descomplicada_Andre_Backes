/* 11-Elabore um programa que contenha uma constante qualquer do tipo float.
Use o comando #define. Imprima essa constante. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    #define pi 3.1415

    printf("%f\n",pi);

    return 0;
}
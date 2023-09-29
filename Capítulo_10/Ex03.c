/* 3-Crie um programa que contenha um array de float com 10 elementos. Imprima o endereço
 de cada posição desse array. */

 #include <stdio.h>

 int main(){

    float *p[10];

    for(int i = 0; i < 10; i++){
        //ou p[i]
        printf("*p[%d] = %p\n", i, *(p+i));
    }

    return 0;
 }
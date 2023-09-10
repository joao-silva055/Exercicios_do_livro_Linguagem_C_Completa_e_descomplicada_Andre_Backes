/* 1-Faça um programa que leia dois números e mostre qual deles é maior. */

#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    if(x > y){
        printf("%d maior do que %d.\n", x, y);
    }else{
        printf("%d maior do que %d.\n", y, x);
    }

    return 0;
}

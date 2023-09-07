/* 4-Leia quatro valores do tipo float. Calcule a média artmética desses valores. */

#include <stdio.h>

int main(){

    float a, b, c, d, media;

    printf("Digite quatro valores do tipo float: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    media = (a + b + c + d) / 4;
    
    printf("Media: %f\n", media);

    return 0;
}
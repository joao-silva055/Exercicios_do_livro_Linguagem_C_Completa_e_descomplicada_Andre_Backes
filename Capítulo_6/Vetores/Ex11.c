/* 11-Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule
o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. 
Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números. */

#include <stdio.h>
#include <math.h>

int main(){

    float quadrado[5], vetor[5];

    for(int i = 0; i < 5; i++ ){
        printf("%dº valor real: ", i+1);
        scanf("%f", &vetor[i]);
        quadrado[i] = vetor[i] * vetor[i];
    }

    for(int i = 0; i < 5; i++){
        printf("quadrado[%d] = %.2f\n", i+1, quadrado[i]);
    }
    printf("\n");

    return 0;
}
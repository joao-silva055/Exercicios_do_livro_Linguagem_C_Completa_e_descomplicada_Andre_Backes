/* 3-Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles. */

#include <stdio.h>
#include <math.h>

struct coordenadas{
    float x, y;
};

int main(){
    
    struct coordenadas pontos[2];
    float distancia;

    printf("****Distância entre dois pontos****\n");
    for(int i = 0; i < 2; i++){
        printf("Digite as coordenadas do %dº ponto\n", i+1);
        printf("X%d: ", i+1);
        scanf("%f", &pontos[i].x);
        printf("Y%d: ", i+1);
        scanf("%f", &pontos[i].y);
    }

    distancia = sqrt(pow((pontos[0].x - pontos[1].x), 2) + pow((pontos[0].y - pontos[1].y),2));

    printf("A distância entre os pontos é de: %.2f\n", distancia);

    return 0;
}
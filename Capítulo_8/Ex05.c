/* 5-Usando uma estrutura Retângulo do exercício anterior, faça um programa que declare
e leia uma estrutura Retângulo e um ponto, informe se esse ponto está ou não dentro do 
retângulo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
    int X, Y;
    int x1, y1;
};

struct retangulo{
    struct pontos psup_esq, pinf_dir, ponto;
};

int main(){

    struct retangulo retang;
    int area, perimetro, comp_diag;

    printf("Ponto superior esquerdo: \n");
    printf("X: ");
    scanf("%d", &retang.psup_esq.X);
    printf("Y: ");
    scanf("%d", &retang.psup_esq.Y);

    printf("Ponto inferior direito: \n");
    printf("X: ");
    scanf("%d", &retang.pinf_dir.X);
    printf("Y: ");
    scanf("%d", &retang.pinf_dir.Y);

    area = (retang.psup_esq.Y - retang.pinf_dir.Y)*(retang.pinf_dir.X - retang.psup_esq.X);
    comp_diag = sqrt(pow((retang.pinf_dir.X - retang.psup_esq.X), 2) + pow((retang.pinf_dir.Y - retang.psup_esq.Y),2));
    perimetro = abs(((retang.pinf_dir.X - retang.psup_esq.X)+(retang.psup_esq.Y - retang.pinf_dir.Y))*2);

    printf("Área: %d\n", area); 
    printf("Diagonal: %d\n", comp_diag);
    printf("Perimetro: %d\n", perimetro);

    //Aqui começa o código adicional para resolução do exercício 5.
    printf("Digite as coordenadas de um ponto: \n");
    printf("X: ");
    scanf("%d", &retang.ponto.x1);
    printf("Y: ");
    scanf("%d", &retang.ponto.y1);

    //verificção da condições para determinar se o ponto encontra-se dentro do retangulo anterior.
    if((retang.ponto.x1 < retang.psup_esq.X && retang.ponto.x1 > retang.pinf_dir.X)||(retang.ponto.Y < retang.psup_esq.Y && retang.ponto.Y > retang.pinf_dir.Y)){
        printf("O ponto digitado encontra-se dentro do retângulo calculado anteriormente.\n");
    }else{
        printf("O ponto digitado NÂO encontra-se dentro do retângulo calculado anteriormente.\n");
    }

    return 0;
}
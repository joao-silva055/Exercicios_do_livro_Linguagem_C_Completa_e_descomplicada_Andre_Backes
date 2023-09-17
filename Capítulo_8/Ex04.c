/* 4-Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior 
esquerdo e o ponto inferior direito do Retângulo. Cada ponto é definido por uma estrutura 
Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura
Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse retângulo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos{
    int X, Y;
};

struct retangulo{
    struct pontos psup_esq, pinf_dir;
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

    return 0;
}
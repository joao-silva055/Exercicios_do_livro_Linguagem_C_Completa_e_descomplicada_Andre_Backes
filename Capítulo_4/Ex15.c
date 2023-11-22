/* 15-Faça um programa que leia os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como 
                            x = (-b±√Δ)/2 * a 
em que Δ = b²-4*a*c e ax²+bx+c = 0 representa uma equação do segundo grau. A variável
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem "Não é equação de 
segundo grau". Do contrário, imprima:
-Se Δ < 0, não existe real. Imprima a mensagem "Não existe raíz".
-Se Δ = 0, existe uma raíz real. Imprima a raiz e a mensagem "raíz única".
-Se Δ > 0, existe duas raízes reais. Imprima as raízes. */

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("\t\tEQUAÇÃO DO SEGUNDO GRAU\nDigite os valores de a, b e c respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("Não é uma equação do segundo grau!\nValor de 'a' igual a zero!\n");
    }else{
        delta = pow(b, 2) - (4 * a * c);

        if(delta < 0){
            printf("Não existe raíz!\n");
        }else{
            if(delta == 0){
                x1 = - b / 2 * a;
                printf("Raíz única: %f\n", x1);
            }else{
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("1ª Raiz: %.2f\n2ª Raiz: %.2f\n", x1, x2);
            }
        }
    }

    return 0;
}

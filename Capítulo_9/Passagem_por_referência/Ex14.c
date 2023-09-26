/* 14-Elabore uma função que receba por parâmetro os coeficientes de uma equação do 
segundo grau. Em seguida, calcule e mostre as raízes dessa equação. Lembre-se de que
as raízez são calculadas como
*Formula*
em que Δ = b² - 4 * a * c e ax² + bx + c = 0 representa uma equação do segundo grau. A 
variavél a tem de ser diferente de zero. Caso seja igual, imprima a mensagem "Não é 
uma equação de segundo grau" e retorne o valor - 1. Do contrário, retorne o número de 
raízes (por referência) se elas existirem: 

Se Δ < 0, não existe real. Número de raízes: 0
Se Δ = 0, existe uma raíz real. Número de raízes: 1
Se Δ > 0, existe duas raízes reais. Número de raízes: 2 */

#include <stdio.h>
#include <math.h>

int equacao_segundo_grau(int a, int b, int c, float *x1, float *x2){
    if(a == 0){
        printf("Não é aquação de segundo grau.\n");
        return -1;
    }else{

        int delta = (pow(b, 2) - (4 * a * c));

        if(delta < 0){
            printf("Não existe raíz!\n");
        }else{
            if(delta == 0){
                *x1 = - b / 2 * a;
                printf("Raíz única: %f\n", *x1);
            }else{
                *x1 = (-b + sqrt(delta)) / (2 * a);
                *x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Valor x1: %f\nValor x2: %f\n", *x1, *x2);
            }
        }
    }

}

int main(){

    int a, b, c;
    float x1, x2;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    equacao_segundo_grau(a, b, c, &x1, &x2);

    return 0;
}
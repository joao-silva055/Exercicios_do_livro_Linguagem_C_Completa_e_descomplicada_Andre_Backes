/* 19-Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule o 
valor do cosseno desse ângulo usando a sua respectiva série de Taylor: 
                        *Fórmula* 
em que x é o valor do ângulo em radianos. Considerar π = 3.1414592 e n variando de 0 até 5.*/

#include <stdio.h>
#include <math.h>
#define pi 3.1414592
int fatorial(int x);

float calcula_coseno(float graus){
    float cosseno = 0, x_rad;
    x_rad = graus * (pi/180);
    for(int i = 0; i <= 5; i++){
        cosseno += ((float)pow(-1.0, i)/(float)fatorial(2*i)) * pow(x_rad, 2*i);
    }
    return cosseno;
}

int main(){

    float ang_graus, cosseno_angulo;

    printf("Digite o valor de um ângulo em graus: ");
    scanf("%f", &ang_graus);

    cosseno_angulo = calcula_coseno(ang_graus);

    printf("O cosseno de %.2fº é %f.\n", ang_graus, cosseno_angulo);

    return 0;
}
int fatorial(int x){
    int fat = 1;
    for(int i = 1; i <= x; i++){
        fat *= i;
    }
    return fat;
}
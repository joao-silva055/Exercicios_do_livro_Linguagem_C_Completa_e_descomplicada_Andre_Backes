/* 14-Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números

em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado. */

#include <stdio.h>
#include <math.h>

#define n 10

int main(){

    float v[n], m = 0, d, variancia = 0;

    for(int i = 0; i < n; i++){
        printf("Digite o %dº valor de 10: ", i+1);
        scanf("%f", &v[i]);
        m += v[i]/10;
    }

    for(int i = 0; i < n; i++){
        v[i] = pow((v[i] - m), 2);
        variancia += v[i];
    }

    variancia = variancia/10;
    d = sqrt(variancia);

    printf("Desvio-padrão = %.2f\n", d);
    printf("Variancia = %.2f\n", variancia);
    printf("Média = %.2f\n", m);

    return 0;
}
/*Por dificuldade para resolução desse exercicio recorri a ajuda. Creditos: 
https://pt.stackoverflow.com/questions/250750/calcular-o-desvio-padr%C3%A3o-de-um-vetor
*/
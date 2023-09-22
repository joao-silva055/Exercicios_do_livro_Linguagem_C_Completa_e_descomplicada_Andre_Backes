/*20) Faça uma função que calcule e retorne o número neperiano e, e = 2.71828183, usando 
a série a seguir: 
                        *Formula* 
A função deve ter como parâmetro o número de termos que serão somados, N. Note que quabto 
maior esse número, mais próxima do valor e estará a resposta.*/

#include <stdio.h>
int fatorial(int x);

float calcula_numero_neperiano(int n){
    float neperiano = 0;
    for(int i = 0; i <= n; i++){
        neperiano += (1.0)/((float)fatorial(i));
    }
    return neperiano;
}


int main(){

    int n_termos;
    float n_neperiano;

    printf("Digite quantos termos deseja somar: ");
    scanf("%d", &n_termos);

    n_neperiano = calcula_numero_neperiano(n_termos);

    printf("Valor aproximado do número neperiano: %f.\n", n_neperiano);

    return 0;
}
int fatorial(int x){
    int fat = 1;
    for(int i = 1; i <= x; i++){
        fat *= i;
    }
    return fat;
}
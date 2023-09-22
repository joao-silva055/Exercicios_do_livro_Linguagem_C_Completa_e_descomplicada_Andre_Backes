/* 16-Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída 
um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos 
n = 4: 

*
**
***
****
***
**
*   */

#include <stdio.h>

void triangulo_lateral(int l){

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = l-1; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

}

int main(){

    int linhas;

    printf("Digite um valor: ");
    scanf("%d", &linhas);

    triangulo_lateral(linhas);

    return 0;
}
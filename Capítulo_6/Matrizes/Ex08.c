/* 8-Calcular e imprimir na tela uma matriz de tamanho 10x10, em que seus elementos são 
da forma: i > j a[i][j] = 2i + 7j - 2, se i < j a[i][j] = 3i² - 1, 
se i = j a[i][j] = 4i³ + 5j² + 1 */

#include <stdio.h>
#include <math.h>

int main(){

    int a[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i > j){
                a[i][j] = (2*i) + (7*j) - 2;
            }else{
                if(i < j){
                    a[i][j] = (3*pow(i, 2)) - 1;
                }else{
                    a[i][j] = (4*pow(i, 3)) + (5*j) + 1;
                }
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
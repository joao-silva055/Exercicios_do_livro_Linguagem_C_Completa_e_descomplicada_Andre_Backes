/* 14-Crie uma função recursiva que retorne o menor elemento em um vetor. */

#include <stdio.h>

int retorna_maior(int v[], int szmax){
    if(szmax == 0){
        return v[szmax];
    }
    int valor = v[szmax];
    int menor = retorna_maior(v, szmax - 1);

    if(valor > menor){
        return menor;
    }
    return valor;

}

int main(){

    //Menor elemento = 10
    int v[] = {56, 23, 48, 63, 25, 10, 84, 69, 16, 58}, menor;

    menor = retorna_maior(v, 10);

    printf("O menor valor valor presente no veetor é %d.\n", menor);

    return 0;
}
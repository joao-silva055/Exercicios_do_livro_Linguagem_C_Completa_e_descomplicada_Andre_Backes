/* 1-Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e 
exiba o maior endereço. */

#include <stdio.h>

int main(){

    int x, y;
    int *px = &x, *py = &y;

    if(px > py){
        printf("PX(%p) > PY(%p)\n", px, py);
    }else if(py > px){
        printf("PY(%p) > PX(%p)\n", py, px);
    }else{
        //Ocasião improvavel
        printf("PY(%p) = PX(%p)\n", py, px);
    }

    return 0;
}

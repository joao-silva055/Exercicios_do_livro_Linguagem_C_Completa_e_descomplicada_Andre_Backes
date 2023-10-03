/* 9-Crie uma função que receba uma string e retorne o ponteiro para essa string invertida. */

//Obs: Adaptação do exercício 5 do capítulo 7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* invertestring(char *str1, int szmx){

    int limite = strlen(str1)-1;
    char troca_posicao;

    for(int i = 0; i < limite; i++, limite--){
        troca_posicao = *(str1 + i);
        *(str1 + i) = *(str1 + limite);
        *(str1 + limite) = troca_posicao;
    }

    return str1;
}

int main(){

    char *str;

    str = (char *) malloc(20 * sizeof(char));
    if(str == NULL){
        printf("Erro. Memória insuficiente!\n");
        exit(1);
    }else{
        printf("Digite uma string: ");
        fgets(str, 20, stdin);
    }

    str = invertestring(str, 20);

    printf("O inverso da string digitada é: ");
    printf("%s", str);
    printf("\n");

    free(str);
    str = NULL;

    return 0;
}
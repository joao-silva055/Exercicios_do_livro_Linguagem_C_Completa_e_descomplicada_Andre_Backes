/* 12-Escreva uma função que receba um número inteiro positivo e retorne o maior fator 
primo desse número. */

#include <stdio.h>
int verifica_primo(int p);

int maior_primo(int mp){
    int aux;
    for(int i = 1; i < mp; i++){
        if(verifica_primo(i) && mp%i == 0){
            aux = i;
        }
    }
    return aux;
}

int main(){

    int valor, m_primo;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if(verifica_primo(valor)){
        printf("O valor digitado é um primo.\n");
    }else{
        m_primo = maior_primo(valor);
        printf("O maior fator primo de %d é %d.\n", valor, m_primo);
    }
    
    return 0;
}

int verifica_primo(int p){
    int verificador = 2;
    for(int i = 1; i <= p; i++){
        if(p%i == 0){
            verificador--;
        }
    }
    if(verificador == 0){
        return 1;
    }else{
        return 0;
    }
}
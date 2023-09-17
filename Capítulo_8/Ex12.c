/* 12-Crie uma enumeração representando os dias da semana. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o dia da semana correspondente. */

#include <stdio.h>
enum semana {Domingo = 1, Segunda, Terça, Quarta, Quinta, Sexta, Sábado} dia;
  
int main(){

    int escolha;

    do{
        printf("Digite um valor de 1 até 7: ");
        scanf("%d", &escolha);
    }while(escolha < 1 || escolha > 7);

    switch(escolha){
        case Domingo:
            printf("O valor digitado corresponde a domingo.\n");
        break;
        case Segunda:
            printf("O valor digitado corresponde a segunda-feira.\n");
        break;
        case Terça:
            printf("O valor digitado corresponde a terça-feira.\n");
        break;
        case Quarta:
            printf("O valor digitado corresponde a quarta-feira.\n");
        break;
        case Quinta:
            printf("O valor digitado corresponde a quinta-feira.\n");
        break;
        case Sexta:
            printf("O valor digitado corresponde a sexta-feira.\n");
        break;
        case Sábado:
            printf("O valor digitado corresponde a sábado.\n");
        break;
    }

    return 0;
}
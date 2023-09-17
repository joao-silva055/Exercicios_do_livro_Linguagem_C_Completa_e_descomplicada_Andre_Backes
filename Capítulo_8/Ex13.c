/* 13-Crie uma enumeração representando os meses do ano. Agora, escreva um programa que 
leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele 
possui */

#include <stdio.h>

enum ano {
    janeiro = 1,
    fevereiro,
    março,
    abril,
    maio,
    junho,
    julho,
    agosto,
    setembro,
    outubro,
    novembro,
    dezembro,
};

int main(){

    int mes;

    printf("Digite um valor entre 1 á 12: ");
    scanf("%d", &mes);

    switch(mes){
        case janeiro: 
            printf("O valor digitado corresponde ao mês de janeiro com 31 dias.\n");
        break;
        case fevereiro: 
            printf("O valor digitado corresponde ao mês de fevereiro com 28 dias.\n");
        break;
        case março: 
            printf("O valor digitado corresponde ao mês de março com 31 dias.\n");
        break;
        case abril: 
            printf("O valor digitado corresponde ao mês de abril com 30 dias.\n");
        break;
        case maio: 
            printf("O valor digitado corresponde ao mês de maio com 31 dias.\n");
        break;
        case junho: 
            printf("O valor digitado corresponde ao mês de junho com 30 dias.\n");
        break;
        case julho: 
            printf("O valor digitado corresponde ao mês de julho com 31 dias.\n");
        break;
        case agosto: 
            printf("O valor digitado corresponde ao mês de agosto com 31 dias.\n");
        break;
        case setembro: 
            printf("O valor digitado corresponde ao mês de setembro com 30 dias.\n");
        break;
        case outubro: 
            printf("O valor digitado corresponde ao mês de outubro com 31 dias.\n");
        break;
        case novembro: 
            printf("O valor digitado corresponde ao mês de novembro com 30 dias.\n");
        break;
        case dezembro: 
            printf("O valor digitado corresponde ao mês de dezembro com 31.\n");
        break;
        default: printf("O valor digitado é inválido.\n");
    }
    return 0;
}
/* 10-Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo 
representará a operação que se deseja efetuar com os números. Assim, se o símbolo for '+', 
deverá ser realizada uma adição, se for '-', uma subtração, se for '/', uma divisão, e, 
se for '*', será efetuada uma multiplicação. Retorne o resultado da operção para o 
programa principal. */

#include <stdio.h>

float operacoes_basicas(float n1, float n2, char op){
    float resultado;
    switch(op){
        case '+':resultado = n1 + n2; break;
        case '-':resultado = n1 - n2; break;
        case '/':resultado = n1 / n2; break;
        case '*':resultado = n1 * n2; break;
        default: printf("Operação inválida.\n");
    }
    return resultado;
}

int main(){

    float numero1, numero2, resultado_op;
    char operacao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);

    getchar();

    printf("Agora digite a operação que deseja realizar: \n");
    printf("[+]Adição\t[-]Subtração\n[/]Divisão\t[*]Multiplicação\nEscolha: ");
    scanf("%c", &operacao);

    resultado_op = operacoes_basicas(numero1, numero2, operacao);

    printf("O resultado do cálculo escolhido é: %.2f\n", resultado_op);

    return 0;
}
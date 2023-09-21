/* 9-Elabore uma função que receba três notas de um aluno como parâmetro e uma letra. Se
a letra for "A", a função deverá calcular a média aritmética das notas do aluno; se for 
"P", deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada 
para o programa principal. */

#include <stdio.h>
#include <ctype.h>

float calcula_media(int n1, int n2, int n3, char op){
    float m;
    if(op == 'p'){
        m = (n1*5.0 + n2*3.0 + n3*2.0)/(5+3+2);
    }else{
        if(op == 'a'){
            m = (n1 + n2 +n3)/3.0;
        }
    }
    return m;
}

int main(){

    float notas[3], media;
    char opcao;

    printf("Digite as notas para o cálculo da média\n");
    for(int i = 0; i < 3; i++){
        printf("Digite a %dº nota do aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }
    getchar();
    printf("Escolha a média que deseja cálcular \n");
    printf("[A]Aritmética\n[P]Ponderada\nOpção: ");
    scanf("%c", &opcao);
    opcao = tolower(opcao);
    media = calcula_media(notas[0], notas[1], notas[2], opcao);

    if(opcao == 'p'){
        printf("A média ponderada das notas é de: %.2f\n", media);
    }else{
        if(opcao == 'a'){
            printf("A média aritmética das notas é de: %.2f\n", media);
        }else{
            printf("Opção inválida.\n");
        }
    }

    return 0;
}
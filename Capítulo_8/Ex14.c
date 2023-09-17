/* 14-Crie uma enumeração representando os itens de uma lista de compras. Agora, escreva 
um programa que leia um valor do teclado e exiba o nome do item comprado e o seu preço. */

#include <stdio.h>
enum lista_compras {
    cerveja = 1,
    torresmo,
    picanhakg,
    pao_de_alho,
    cachaça,
}itens;

int main(){

    int item;

    printf("Digite um valor de 1 a 5: ");
    scanf("%d", &item);

    switch(item){
        case cerveja: printf("Fardo de cerveja R$71,88.\n"); break;
        case torresmo: printf("Pacote de torresmo R$14,99.\n"); break;
        case picanhakg: printf("Picanha kg R$59,99.\n"); break;
        case pao_de_alho: printf("Pão de alho 4un R$9,99.\n"); break;
        case cachaça: printf("Cachaça 51 R$44,99.\n"); break;
        default: printf("O valor digitado é inválido.\n");
    }

    return 0;
}
/* 1-Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene 
esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida */

#include <stdio.h>
#include <stdlib.h>

struct ender{
    char rua[50];
    int numero;
};
struct cad{
    char nome[50];
    int idade;
    struct ender endereco;
};

int main(){

    struct cad cadastro;

    printf("*****CADASTRO*****\n");
    printf("Nome: ");
    fgets(cadastro.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &cadastro.idade);
    printf("Endereço\n");
    printf("Rua: ");
    setbuf(stdin, NULL);
    fgets(cadastro.endereco.rua, 50, stdin);
    printf("Número: ");
    scanf("%d", &cadastro.endereco.numero);

    //Comando para limpar a tela do terminal, seu uso aqui é somente para melhor
    //visualização do exercicio
    system("clear");

    printf("*****CONSULTA DADOS CADASTRADOS*****\n");
    printf("Nome: %s", cadastro.nome);
    printf("Idade: %d\n", cadastro.idade);
    printf("Rua: %s", cadastro.endereco.rua);
    printf("Número: %d\n", cadastro.endereco.numero);
    
    return 0;
}

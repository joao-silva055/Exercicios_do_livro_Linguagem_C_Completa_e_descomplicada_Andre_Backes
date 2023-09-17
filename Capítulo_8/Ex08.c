/* 8-Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. 
Agora escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da 
pessoa mais nova e da mais velha. */

#include <stdio.h>
#include <stdlib.h>
#define max_cad 6

struct st_cadastro{
    char nome[50];
    int dia, mes, ano;
}cadastro[max_cad];

struct st_verifica_idades{
    int dia, mes, ano;
}mais_velho, mais_novo;


int main(){

    int id_v = 0, id_n = 0;

    for(int i = 0; i < max_cad; i++){
        printf("===%dº CADASTRO===\n",i+1);
        printf("Nome: ");
        fgets(cadastro[i].nome, 50, stdin);
        printf("DATA DE NASCIMENTO\n");
        printf("Dia: ");
        scanf("%d", &cadastro[i].dia);
        printf("Mês: ");
        scanf("%d", &cadastro[i].mes);
        printf("Ano: ");
        scanf("%d", &cadastro[i].ano);
        setbuf(stdin, NULL);
    }

    mais_velho.dia = mais_novo.dia = cadastro[0].dia;
    mais_velho.mes = mais_novo.mes = cadastro[0].mes;
    mais_velho.ano = mais_novo.ano = cadastro[0].ano;

    for(int i = 1; i < max_cad; i++){
        if(mais_novo.ano < cadastro[i].ano){
            id_n = i;
        }else{
            if(mais_novo.ano == cadastro[i].ano){
                if(mais_novo.mes < cadastro[i].mes){
                    id_n = i;
                }else{
                    if(mais_novo.mes == cadastro[i].mes){
                        if(mais_novo.dia < cadastro[i].dia){
                            id_n = i;
                        }else{
                            mais_novo.dia = cadastro[i].dia;
                            mais_novo.mes = cadastro[i].mes;
                            mais_novo.ano = cadastro[i].ano;
                        }
                    }
                }
            }
        }

        if(mais_velho.ano > cadastro[i].ano){
            id_v = i;
        }else{
            if(mais_velho.ano == cadastro[i].ano){
                if(mais_velho.mes > cadastro[i].mes){
                    id_v = i;
                }else{
                    if(mais_velho.mes == cadastro[i].mes){
                        if(mais_velho.dia > cadastro[i].dia){
                            id_v = i;
                        }else{
                            mais_velho.dia = cadastro[i].dia;
                            mais_velho.mes = cadastro[i].mes;
                            mais_velho.ano = cadastro[i].ano;
                        }
                    }
                }
            }
        }
    }

    printf("===PESSOA MAIS JOVEM===\n");
    printf("\t%s\n", cadastro[id_n].nome);
    printf("===PESSOA MAIS VELHA===\n");
    printf("\t%s\n", cadastro[id_v].nome);

    return 0;
}
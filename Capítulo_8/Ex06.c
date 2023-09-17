/* 6-Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter
o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa
que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as 
notas do aluno que possui a maior média geral dentre os cinco. */

#include <stdio.h>

struct aluno{
    int matricula;
    char nome[100];
    float notas[3];
};

int main(){

    struct aluno alunos[5];
    float maior_media_geral = 0, media;
    int identificador;

    for(int i = 0; i < 5; i++){
        media = 0;
        //Preenche as estruturas com os dados básicos pedidos no exercício
        printf("***DADOS DO %dº ALUNO***\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        setbuf(stdin, NULL);
        printf("Nome aluno: ");
        fgets(alunos[i].nome, 100, stdin);
        setbuf(stdin, NULL);
        for(int j = 0; j < 3; j++){
            printf("%dº nota: ", j+1);
            scanf("%f", &alunos[i].notas[j]);
            media += alunos[i].notas[j];
        }
        printf("***********************\n");
        media = media / 3;
        //Aqui aproveitamos a repetição para verificar a maior média
        if(maior_media_geral < media){
            maior_media_geral = media;
            identificador = i;
        }   
    }

    printf("Maior média geral: %s", alunos[identificador].nome);
    for(int i = 0; i < 3; i++){
        printf("%dº nota: %.2f\n", i+1, alunos[identificador].notas[i]);
    }
    printf("Média geral: %.2f\n", maior_media_geral);

    return 0;
}
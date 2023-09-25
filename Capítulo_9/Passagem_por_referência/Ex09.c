/* 9-Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve 
conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva
uma função que receba um vetor de tamanho N dessa estrutura. Essa função deve retornar o 
índice do aluno que possui a maior média geral entre todos os alunos. */

#include <stdio.h>
typedef struct{
    int matricula;
    char nome[50];
    float notas[3];
}cad_alunos;

void coleta_dados(cad_alunos aluno[], int qtdal);
int maior_media(cad_alunos aluno[], int qtdal);

int main(){
    
    int QTDAL;
    printf("Quantos alunos deseja cadastrar: ");
    scanf("%d", &QTDAL);

    cad_alunos aluno[QTDAL];

    coleta_dados(aluno, QTDAL);

    printf("Aluno com a maior média: %s\n", aluno[maior_media(aluno, QTDAL)].nome);

    return 0;
}
void coleta_dados(cad_alunos aluno[], int qtdal){
    printf("==== CADASTRO ALUNOS ====\n\n");
    for(int i = 0; i < qtdal; i++){
        printf("MATRÍCULA: ");
        scanf("%d", &aluno[i].matricula);
        getchar();
        printf("NOME: ");
        fgets(aluno[i].nome, 50, stdin);
        for(int j = 0; j < 3; j++){
            printf("NOTA %d: ", j+1);
            scanf("%f", &aluno[i].notas[j]);
        }
        printf("-------------------------\n");
    }
}
int maior_media(cad_alunos aluno[], int qtdal){
    int indice = 0;
    float maior_media, media;
    for(int i = 0; i < 3; i++){
        maior_media = (aluno[0].notas[i])/3;
    }
    for(int i = 1; i < qtdal; i++){
        for(int j = 0; j < qtdal; j++){
            media = (aluno[i].notas[j])/3;
        }
        if(media > maior_media){
            maior_media = media;
            indice = i;
        }
    }
    return indice;
}
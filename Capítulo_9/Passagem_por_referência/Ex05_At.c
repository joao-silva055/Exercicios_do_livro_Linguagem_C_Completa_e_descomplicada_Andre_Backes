/* 5-Escreva uma função que calcule o desvio padrão d de um vetor V contendo n números
*Fórmula*
em que m é a média desse vetor. */

#include <stdio.h>
#include <math.h>
float calcula_media(float *v, int tamanho);
float calcula_variancia(float *v, int tamanho);
float calcula_desvio(float *v, int tamanho);

int main(){

    int tm;
    float desvio_padrao;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tm);
    float vetor[tm];

    for(int i = 0; i < tm; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%f", &vetor[i]);
    }

    desvio_padrao = calcula_desvio(vetor, tm);

    printf("O desvio padrão é de %f.\n", desvio_padrao);

    return 0;
}
float calcula_media(float *v, int tamanho){
    float media = 0;
    for(int i = 0; i < tamanho; i++){
        media += v[i];
    }
    return (media/(float)tamanho);
}
float calcula_variancia(float *v, int tamanho){
    float media = calcula_media(v, tamanho);
    float variancia = 0;
    for(int i = 0; i < tamanho; i++){
        variancia += (float) pow(v[i] - media, 2) / (float)(tamanho-1);
    }
    return variancia;
}
float calcula_desvio(float *v, int tamanho){
    float desvio = 0, variancia;
    variancia = calcula_variancia(v, tamanho);
    desvio = sqrt(variancia);
    return desvio;
}

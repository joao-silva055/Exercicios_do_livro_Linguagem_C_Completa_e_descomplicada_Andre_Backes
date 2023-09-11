/* 17-Escreva um programa que leia um número inteiro positivo N e em seguida imprima
 N linhas do chamado triângulo de Floyd:

 1
 2 3
 4 5 6
 7 8 9 10 
 11 12 13 14 15
 16 17 18 19 20 21 */

 #include <stdio.h>

 int main(){

    int linhas, contador = 1;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &linhas);

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
 }
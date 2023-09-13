/* 4-Faça um programa que possua um array de nome A que armazene seis números 
inteiros. O programa deve executar os seguintes passos: 
 a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, -7.
 b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] 
 do array e mostre na tela essa soma.
 c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
 d) Mostre na tela cada valor do array A, um em cada linha. */

 #include <stdio.h>

 int main(){

    int A[6] = {1,0,5,-2,-5,-7}, soma = 0;

    /*Por se tratar de poucos valores a soma e a atribuição poderiam ser realizadas de 
    forma manual porem, optei por realiza-las através de um comando de repetição iterativo.*/
    for(int i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
            if(i == 5){
                printf("\n-Soma A[0]+A[1]+A[5]: %d\n", soma);
            }
        }else{
            if(i == 4){
                A[i] = 100;
            }
        }
    }
    printf("-Valores por linha-\n");
    for(int i = 0; i < 6; i++){
        printf("\n%d\n", A[i]);
    }

    return 0;
 }
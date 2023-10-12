/* 7-Faça um programa que permita que o usuário entre com diversos nomes e telefone para cadastro. 
Crie um arquivo com essas informações, uma por linha. O usuário finaliza a entrada com o valor 0 
para o telefone */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int Counter = 1;
    long int PhoneNumber;
    char Name[20];

    FILE *PhoneBook = fopen("PhoneBook.txt", "a+");
    if(PhoneBook == NULL){
        perror("Erro: ");
        exit(1);
    }

    do{
        printf("Digite a %dº sequência: \n", Counter);

        printf("Número: ");
        scanf("%ld", &PhoneNumber);
        setbuf(stdin, NULL);

        if(PhoneNumber != 0){
            printf("Nome: ");
            scanf("%s", Name);
            setbuf(stdin, NULL);
            fprintf(PhoneBook, "%s ", Name);
            fprintf(PhoneBook, "N° %ld \n", PhoneNumber);
        }
        Counter++;
    }while(PhoneNumber != 0); 

    fclose(PhoneBook);
    PhoneBook == NULL;

    return 0;
}
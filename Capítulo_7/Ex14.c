/* 14- O código de César é uma das técnicas de criptografia mais simples e conhecidas. É 
um tipo de substituição no qual cada letra do texto é substituída por outra, que se 
apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de três posições, 
a letra A seria substituída por D. B se tornaria E e assim por diante. Escreva um programa 
que faça uso desse código de César para três posições. Entre com uma string e imprima a 
string codificada. Exemplo:String: a ligeira raposa marrom saltou sobre o cachorro cansado. 
Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr */

#include <stdio.h>
#include <string.h>

int main(){

    char str[200];

    printf("Digite uma string para codficação: ");
    fgets(str, 200, stdin);

    str[strlen(str)-1] = '\0';

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            str[i] = str[i]+3;
        }
    }

    printf("%s", str);
    printf("\n");

    return 0;
}
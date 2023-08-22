#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//27) Construa um algoritmo que apresente todo o alfabeto maiúsculo em uma única
//linha, utilizando a tabela ASCII e laço de repetição.
    for(int x=65; x<91; x++){
        printf("%c", x);
    }
    printf("\n");
    
    system("pause");
    return 0;
}
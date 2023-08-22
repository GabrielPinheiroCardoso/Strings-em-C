#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//24) Construa um algoritmo que solicite uma frase e apresente a quantidade de espaços
//da mesma;
    char pala[100];
    int qtdspc=0;
    printf("Digite um nome(min. 13c):");
    setbuf(stdin, 0);
    fgets(pala, 100, stdin);
    for(int x=0; x<strlen(pala); x++){
        if((int)pala[x]==32){
            qtdspc++;
        }
    }
    printf("A quantidade de espaços na frase é de:%d", qtdspc);
    system("pause");
    return 0;
}
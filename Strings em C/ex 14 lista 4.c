#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(){
//14) Solicite uma string e apresente a frase contendo apenas o primeiro e o último
//caractere em maiúsculo, os demais deverão ser apresentados em minúsculo.
    setlocale(LC_ALL, "Portuguese");
    char frase[100];
    printf("Digite uma frase:");
    setbuf(stdin, 0);
    fgets(frase, 100, stdin);
    for(int x=1; x<strlen(frase)-1; x++){
        frase[x]=tolower(frase[x]);
    }
    frase[0]=toupper(frase[0]);
    frase[strlen(frase)-2]=toupper(frase[strlen(frase)-2]);
    printf("\n%s\n", frase);

    system("pause");
    return 0;
}
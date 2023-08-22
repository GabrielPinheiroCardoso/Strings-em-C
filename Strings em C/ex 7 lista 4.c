#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//7) Solicitar uma palavra e apresentá-la toda em MAIUSCULA;
    char pala1[40]; 
    int x;
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    for(x=0; x<strlen(pala1); x++){
    pala1[x]=toupper(pala1[x]);
    }
    printf("\n%s\n", pala1);

    system("pause");
    return 0;
}
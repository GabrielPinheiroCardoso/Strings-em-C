#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//5) Solicitar uma palavra e apresentá-la na vertical (cada caractere será uma linha);
    char pala1[40]; 
    int tam, x;
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    tam=strlen(pala1);
    for(x=0; x<tam+1; x++){
        printf("%c\n", pala1[x]);
    }

    system("pause");
    return 0;
}
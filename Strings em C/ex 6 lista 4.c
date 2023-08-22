#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//6) Solicitar duas palavras, concatena-las em uma terceira, apresentando-a no final;
    char pala1[40], pala2[40];
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    pala1[strcspn(pala1, "\n")] = '\0';
    printf("\nDigite outra palavra:");
    fgets(pala2, 40, stdin);
    strncat(pala1, pala2, strlen(pala2));
    printf("\n%s\n", pala1);
    
    system("pause");
    return 0;
}
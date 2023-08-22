#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    //16) Solicite uma palavra (mínimo 3 caracteres) e apresente se a mesma é um palíndromo:
    char pala[40], pala2[40] = {0}; 
    int y = 0;
    do{
        printf("Digite uma palavra (Mín. 3c): ");
        setbuf(stdin, 0);
        fgets(pala, 40, stdin);
    }while(strlen(pala) < 4);
    pala[strcspn(pala, "\n")] = '\0';
    for (int x = strlen(pala) - 1; x >= 0; x--) {
        pala2[y] = pala[x];
        y++;
    }
    printf("\n%s", pala2);
    if (strcmp(pala, pala2) == 0) {
        printf("\nA palavra é um palíndromo\n");
    } else {
        printf("\nA palavra n?o é um palíndromo\n");
    }
    system("pause");
    return 0;
}
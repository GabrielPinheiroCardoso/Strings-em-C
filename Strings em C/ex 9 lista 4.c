#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//9) Solicitar uma palavra e apresentá-la em ordem inversa. (ex. AMOR = ROMA);
    char pala1[40]; 
    int x;
    printf("Digite uma palavra:");
    setbuf(stdin, 0);
    fgets(pala1, 40, stdin);
    for(x=strlen(pala1); x>-1; x--){
    printf("%c", pala1[x]);
    }
    printf("\n");
    system("pause");
    return 0;
}
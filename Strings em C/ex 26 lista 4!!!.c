#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//26) Solicite uma frase (mínimo 5 e máximo 50 caracteres) e imagine que possam
//haver caracteres em branco tanto no início quanto no fim da frase. Caso haja,
//elimine-os (espaços das extremidades);
    char pala[51];
    int y=0;
    do{
        printf("Digite uma frase(min. 5c max. 50):");
        setbuf(stdin, 0);
        fgets(pala, 51, stdin);
    }while(strlen(pala)<6 || strlen(pala)>51);
    for(int x=0; x<strlen(pala); x++){
        if((int)pala[x]==32){
            printf("Oi");
        }
    }

    system("pause");
    return 0;
}
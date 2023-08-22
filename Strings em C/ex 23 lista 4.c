#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
//23) Faça o mesmo que o exercício anterior, entretanto apresentando apenas as
//consoantes;
    char vogmai[22]="BCDFGHJKLMNPQRSTVWXYZ", vogmin[22]="bcdfghjklmnpqrstvwxyz";
    for(int x=0; x<strlen(vogmai); x++){
        printf("%c=%d %c=%d\n", vogmai[x], (int)vogmai[x], vogmin[x], (int)vogmin[x]);
    }

    system("pause");
    return 0;
}
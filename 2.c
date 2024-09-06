#include <stdio.h>
#include <locale.h>

int main(){
    char frase [100];
    int a = 0, i;
    
    scanf("%[^\n]", frase);
    
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 65 || frase[i] == 97) a++;
    }
    
    if (a == 0) printf("Não existem A's nessa frase\n");
    else printf("Existem %d A's nessa frase\n", a);
}
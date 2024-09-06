#include <stdio.h>
#include <locale.h>

int isInFibonacci(int n){
	int a, b, aux = 0, i;
	a = 0;
	b = 1;
	
	if (n == 0 || n == 1) {
        return 1;
    }
	
	while ( b <= n ){
		aux = a + b;
        a = b;
        b = aux;
        
        if(b == n) return 1;
	}

	return 0;
}

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int  n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(isInFibonacci(n))
		printf("O número %d está na sequência fibonacci!\n", n);
	else
		printf("O número %d não está na sequência fibonacci!\n", n);
}
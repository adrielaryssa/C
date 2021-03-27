#include<stdio.h>
void main(){
	int numero, maior; 
	numero=0; 
	maior = 0;
	for ( ; ; ) {
		printf("Digite um numero: ");
		scanf("%d", &numero);
		if( numero > maior ){
			maior = numero;
		}
		if (numero == 0 ) {
			break;
		}
	}
	printf("O maior numero digitado é %d.\n", maior);
}

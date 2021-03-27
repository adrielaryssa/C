#include <stdio.h>

int potencia(int num1,int num2) {
	int result, i;
    result = 1;
    for (i=1 ; i <= num2 ; i++) {
    	result = result*num1;
	}
    return result;	
}
void main (){
	int num1, num2, result;
	printf("Funcao - Potenciacao");
	printf("\nDigite o primeiro numero : ");
	scanf ("%d",&num1);
	printf("Digite o segundo numero : ");
	scanf ("%d",&num2);
    result = potencia(num1,num2);
    printf ("Resultado : %d",result);
}

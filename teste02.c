#include<stdlib.h>
#include<stdio.h>
void main(){
	float salario,novosal;
	salario=0;
	novosal=0;
	printf("\nIforme o Salario : ");
	scanf("%f",&salario);
    if (salario <= 500.00){
    	novosal = salario * 1.5;
	}
    if (salario >= 500.01 && salario <= 1000.00){
    	novosal = salario * 1.4;
	}
	printf("\nO novo salario e %f:",novosal);
}


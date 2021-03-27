#include <stdio.h>

float aumento(float preco, float perc){
	float nVpreco;
	nVpreco = preco+(preco*perc/100);
	return nVpreco;
}

int main (){
	float preco, perc,nVpreco;
	printf ("Programa para calcular novo preco \n");
	printf ("Informe o preco : ");
	scanf ("%f",&preco);
	printf ("Informe o percentual :");
	scanf ("%f",&perc);
	nVpreco = aumento(preco,perc);
	printf ("Novo preco %.2f",nVpreco);
	printf("O percentual acrescentado %.2f",perc);	
		
	return 0;
}



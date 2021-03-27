#include <stdio.h>

void main (){
	float n1, n2, n3, media;
	char tipo;
	printf("Digite a Nota 1 : ");
	scanf ("%f",&n1);
	fflush(stdin);
	printf("Digite a Nota 2 : ");
	scanf ("%f",&n2);
	fflush(stdin);
	printf("Digite a Nota 3 : ");
	scanf ("%f",&n3);
	fflush(stdin);
	printf("Digite o tipo de calculo : ");
	scanf ("%c",&tipo);
	media = 0;
    if (tipo == 'A') {
     	printf("\nMedia Aritmetica Simples");
    	media = (n1 + n2 + n3) / 3;
	} else {
     	printf("\nMedia Aritmetica Ponderada");
    	media = ((n1*5) + (n2*3) + (n3*2)) / 10;
	}
    printf ("\nTipo de Calculo : %c",tipo);
    printf ("\nMedia : %.2f",media);
}

#include <stdio.h>
#include<locale.h>
#include<limits.h>
void main (){
	setlocale (LC_ALL, "Portuguese");
	int cont, maior, soma, menor, med, n, n1, n2, i, x;
	char opcao;
	for (;;) {
		printf ("\nLista de op��es:\n\n");
		printf ("\tA - Soma, maior, menor e m�dia.\n");
		printf ("\tB - N�meros divis�veis por 3 e sua soma.\n");
		printf ("\tC - Soma de 0 at� o n�mero digitado.\n");
		printf ("\tD - M�s correspondente ao n�mero digitado.\n");
		printf ("\tE - Sair do programa.\n");
		printf("\nDigite a op��o desejada:", opcao);
		scanf ("%c", &opcao);
		system ("cls");// para apagar a lista de op��es dps que a op��o � escolhida
		printf("Quando digitar os n�meros, clique duas vezes para aparecer a lista de op��es");// s� pra avisar que � necess�rio dois cliques
		switch (opcao){
			case 'A': case 'a':	
	            cont=0, maior=0, soma=0, menor=INT_MAX, n=1;
				while (n!=0){
				printf ("\n\tDigite um n�mero: " );
				scanf ("%d", &n);
				soma=soma+n;
				cont=cont+1;
				if (n>maior){
					maior=n;
				}
				if (n!=0 && n<menor){
					menor=n;
				}	
				}
				med=soma/cont;
				printf("\n\tO maior n�mero digitado foi: %d.", maior);
				printf("\n\tO resultado da soma dos n�meros digitados �: %d.", soma);
				printf("\n\tO resultado da m�dia dos n�meros digitados �: %d.", med);
				printf("\n\tO menor n�mero digitado foi: %d.\n", menor);	
			break;
			case 'B': case 'b':
				soma=0;
				printf("\n\tDigite um n�mero: ");
				scanf("%d", &n1);
				printf("\n\tDigite outro n�mero: ");
				scanf("%d", &n2);
				if (n1>n2){
				x=n2;
				n2=n1;
				n1=x;
				}
				printf ("\n\tO intervalo vai de %d a %d\n\n", n1, n2);
				while (n1<n2){
					if (n1%3==0){
						printf("\n\tN�mero divis�vel por 3 contido no intervalo: %d\n", n1);
						soma=soma+n1;
					}
				n1=n1+1;
				}
				printf ("\n\tA soma dos n�meros divis�veis por 3 contidos no intervalo � igual a: %d\n", soma);
			
			break;
			case 'C': case 'c':	
				soma=0;
				printf ("\n\tDigite um n�mero positivo: ");
				scanf ("%d", &n);
				if (n>0){
					for (i=0; i<=n; i++){
					soma=soma+i;
					}
				printf ("\n\tA soma de 0 at� %d corresponde a: %d\n", n, soma);
				}
				else {
					printf ("\n\tN�mero inv�lido\n");
				}
			break;
			case 'D': case 'd':	
				printf ("\n\tDigite um n�mero de 1 a 12: ");
				scanf ("%d", &n);
				switch (n){
					case 1:
						printf ("\n\tO m�s correspondente �: Janeiro\n");
						break;
					case 2:
						printf ("\n\tO m�s correspondente �: Fevereiro\n");
						break;
					case 3:
						printf ("\n\tO m�s correspondente �: Mar�o\n");
						break;
					case 4:
						printf ("\n\tO m�s correspondente �: Abril\n");
						break;
					case 5:
						printf ("\n\tO m�s correspondente �: Maio\n");
						break;
					case 6:
						printf ("\n\tO m�s correspondente �: Junho\n");
						break;
					case 7:
					    printf ("\n\tO m�s correspondente �: Julho\n");
						break;
					case 8:
						printf ("\n\tO m�s correspondente �: Agosto\n");
						break;
					case 9:
						printf ("\n\tO m�s correspondente �: Setembro\n");
						break;
					case 10:
						printf ("\n\tO m�s correspondente �: Outubro\n");
						break;
					case 11:
						printf ("\n\tO m�s correspondente �: Novembro\n");
						break;
					case 12:
						printf ("\n\tO m�s correspondente �: Dezembro\n");
						break;
					default:
						printf ("\n\tN�mero digitado n�o corresponde a nenhum m�s.\n");
				}
				break;
		}
		if (opcao == 'E'||opcao == 'e' )
			break;
			printf("\n");// para deixar a mesagem "Precione qualquer tecla..." na linha  de baixo 
			system ("PAUSE");
	} 
	printf("\n");
	printf("The end.\n");
}

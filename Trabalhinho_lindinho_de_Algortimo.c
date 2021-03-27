#include <stdio.h>
#include<locale.h>
#include<limits.h>
void main (){
	setlocale (LC_ALL, "Portuguese");
	int cont, maior, soma, menor, med, n, n1, n2, i, x;
	char opcao;
	for (;;) {
		printf ("\nLista de opções:\n\n");
		printf ("\tA - Soma, maior, menor e média.\n");
		printf ("\tB - Números divisíveis por 3 e sua soma.\n");
		printf ("\tC - Soma de 0 até o número digitado.\n");
		printf ("\tD - Mês correspondente ao número digitado.\n");
		printf ("\tE - Sair do programa.\n");
		printf("\nDigite a opção desejada:", opcao);
		scanf ("%c", &opcao);
		system ("cls");// para apagar a lista de opções dps que a opção é escolhida
		printf("Quando digitar os números, clique duas vezes para aparecer a lista de opções");// só pra avisar que é necessário dois cliques
		switch (opcao){
			case 'A': case 'a':	
	            cont=0, maior=0, soma=0, menor=INT_MAX, n=1;
				while (n!=0){
				printf ("\n\tDigite um número: " );
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
				printf("\n\tO maior número digitado foi: %d.", maior);
				printf("\n\tO resultado da soma dos números digitados é: %d.", soma);
				printf("\n\tO resultado da média dos números digitados é: %d.", med);
				printf("\n\tO menor número digitado foi: %d.\n", menor);	
			break;
			case 'B': case 'b':
				soma=0;
				printf("\n\tDigite um número: ");
				scanf("%d", &n1);
				printf("\n\tDigite outro número: ");
				scanf("%d", &n2);
				if (n1>n2){
				x=n2;
				n2=n1;
				n1=x;
				}
				printf ("\n\tO intervalo vai de %d a %d\n\n", n1, n2);
				while (n1<n2){
					if (n1%3==0){
						printf("\n\tNúmero divisível por 3 contido no intervalo: %d\n", n1);
						soma=soma+n1;
					}
				n1=n1+1;
				}
				printf ("\n\tA soma dos números divisíveis por 3 contidos no intervalo é igual a: %d\n", soma);
			
			break;
			case 'C': case 'c':	
				soma=0;
				printf ("\n\tDigite um número positivo: ");
				scanf ("%d", &n);
				if (n>0){
					for (i=0; i<=n; i++){
					soma=soma+i;
					}
				printf ("\n\tA soma de 0 até %d corresponde a: %d\n", n, soma);
				}
				else {
					printf ("\n\tNúmero inválido\n");
				}
			break;
			case 'D': case 'd':	
				printf ("\n\tDigite um número de 1 a 12: ");
				scanf ("%d", &n);
				switch (n){
					case 1:
						printf ("\n\tO mês correspondente é: Janeiro\n");
						break;
					case 2:
						printf ("\n\tO mês correspondente é: Fevereiro\n");
						break;
					case 3:
						printf ("\n\tO mês correspondente é: Março\n");
						break;
					case 4:
						printf ("\n\tO mês correspondente é: Abril\n");
						break;
					case 5:
						printf ("\n\tO mês correspondente é: Maio\n");
						break;
					case 6:
						printf ("\n\tO mês correspondente é: Junho\n");
						break;
					case 7:
					    printf ("\n\tO mês correspondente é: Julho\n");
						break;
					case 8:
						printf ("\n\tO mês correspondente é: Agosto\n");
						break;
					case 9:
						printf ("\n\tO mês correspondente é: Setembro\n");
						break;
					case 10:
						printf ("\n\tO mês correspondente é: Outubro\n");
						break;
					case 11:
						printf ("\n\tO mês correspondente é: Novembro\n");
						break;
					case 12:
						printf ("\n\tO mês correspondente é: Dezembro\n");
						break;
					default:
						printf ("\n\tNúmero digitado não corresponde a nenhum mês.\n");
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

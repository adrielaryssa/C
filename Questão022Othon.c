#include <stdio.h>

int bissexto(int ano){
	int resto;
	//resto = ano%4;
	if (resto == 0){
		return 1;
	}else{
		return 0;
	}
}
void main (){
	int ano, resto;
	printf("Digite um ano para ver se e bissexto : ");
	scanf ("%d",&ano);
	resto = bissexto(ano);
	if (resto == 1){
		printf ("Ano Bissexto");
	}else{
		printf ("Ano nao e bissexto");
	}
}

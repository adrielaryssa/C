#include<stdio.h>
void main(){
	int num;
	char letra;
    printf("\nDigite um numero de 0 a 10: ");
    scanf("%d", &num);
    printf("\nInforme Portugues ou Ingles: ");
    scanf(" %c", &letra);

    if (letra == "P") {
	    switch ( num ) {
	     case 0 :
	       printf ("Zero\n");
	       break;
	     case 1 :
	       printf ("Um\n");
	       break;
	     case 2 :
	       printf ("Dois\n");
	       break;
	     case 3 :
	       printf ("Tres\n");
	       break;
	     case 4 :
	       printf ("Quatro\n");
	       break;
	     case 5 :
	       printf ("Cinco\n");
	       break;
	     case 6 :
	       printf ("Seis\n");
	       break;
	     case 7 :
	       printf ("Sete\n");
	       break;
	     case 8 :
	       printf ("Oito\n");
	       break;
	     case 9 :
	       printf ("Nove\n");
	       break;
	     case 10 :
	       printf ("Dez\n");
	       break;
	     default :
	       printf ("Numero invalido!\n");
	    }
	} else {
	    switch ( num ) {
	     case 0 :
	       printf ("Zero\n");
	       break;
	     case 1 :
	       printf ("One\n");
	       break;
	     case 2 :
	       printf ("Two\n");
	       break;
	     case 3 :
	       printf ("Three\n");
	       break;
	     case 4 :
	       printf ("Four\n");
	       break;
	     case 5 :
	       printf ("Five\n");
	       break;
	     case 6 :
	       printf ("Six\n");
	       break;
	     case 7 :
	       printf ("Seven\n");
	       break;
	     case 8 :
	       printf ("Eigth\n");
	       break;
	     case 9 :
	       printf ("Nine\n");
	       break;
	     case 10 :
	       printf ("Ten\n");
	       break;
	     default :
	       printf ("Numero invalido!\n");
	    }
	}
}

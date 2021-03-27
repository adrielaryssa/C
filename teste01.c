#include<stdlib.h>
#include<stdio.h>
void main(){
    int numero,antecessor,sucessor;
    printf("\n Informe um Numero : ");
    scanf("%d",&numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("\nAntecessor: %d", antecessor);
    printf("\nSucessor..: %d", sucessor);
}


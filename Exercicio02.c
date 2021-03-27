#include<stdlib.h>
#include<stdio.h>
void main(){
    int n1,n2,soma,sub;
    printf("\n Informe o Primeiro Numero : ");
    scanf("%d",&n1);
    printf("\n Informe o Segundo Numero : ");
    scanf("%d",&n2);
    soma = n1 + n2;
    sub  = n1 - n2;
    printf("\nSoma.....: %d", soma);
    printf("\nSubtracao: %d", sub);
}

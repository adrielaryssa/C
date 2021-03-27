#include<stdlib.h>
#include<stdio.h>
void main(){
    printf("\n Receber 2 Numeros e trocar os valores");
    int x,y,z;
    printf("\n Informe o Primeiro Numero : ");
    scanf("%d",&x);
    printf("\n Informe o Segundo Numero : ");
    scanf("%d",&y);
    z = x;
    x = y;
    y = z;
    printf("\nPrimeiro Numero : %d", x);
    printf("\nSegundo Numero : %d", y);
}

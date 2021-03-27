#include<stdio.h>
void main() {
	int n = 0;
    int x = 0;
	int fatorial = 1;
    printf("Informe um numero :");
    scanf("%d",&n);
	for (x=n ; x > 0 ; x--) {
		fatorial=fatorial*x;
	}
	printf("\nFatorial de %d = %d",n,fatorial);
}

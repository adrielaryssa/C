float porcentagem(float reajust, float precodamercadoria){
	float novovalor=precodamercadoria*(1+reajust/100);
	return (novovalor);
}
void main(){
	float reajust, precodamercadoria, resultado;
	
	printf("Digite um valor.........................:");
	scanf("%f", &precodamercadoria);
	printf("Digite o valor do percentual de reajuste:");
	scanf("%f", &reajust);
	resultado = porcentagem(reajust,precodamercadoria);
	printf("Resultado = %f\n", resultado);

}

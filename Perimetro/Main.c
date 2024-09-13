#include <stdio.h>

int main(){

 float pi = 3.1415927, area, raio, diametro;

	printf("Calculadora de Area \"Circunferencia\"\n");
	printf("Digite o valor do raio: "); scanf("%f", &raio);
	diametro = raio * raio;
	area = pi * diametro; 
	printf("O valor da Area é: %f\n", area);
	return main();
}

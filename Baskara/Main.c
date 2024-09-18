#include <stdio.h>
#include <math.h>

int main(){
   int a, b, c;
   double delta, raiz1, raiz2;
	
	printf("Digite os Valores de A B e C\n"); scanf("%d%d%d", &a, &b, &c);
	printf("Valor de a = %d\nValor de b = %d\nValor de c = %d\n", a, b, c);
   delta  = (b * b) - 4 * a * c;
	printf("delta é = %lf\n", delta);
	if(delta > 0){
   raiz1 = (-b + sqrt(delta)) / (2 * a);
   raiz2 = (-b - sqrt(delta)) / (2 * a);
	printf("As raizes da equação são: %.2lf e .%2lf\n", raiz1, raiz2);
	}	
	
	else if (delta == 0){
   raiz1 = -b / (2 * a);
	printf("A raiz da equação é: %.2lf.\n", raiz1);
}

	else{
	} 

}

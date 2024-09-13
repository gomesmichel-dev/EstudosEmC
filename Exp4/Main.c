#include <stdio.h>

int main(){
 short int idade;
 int 	   montante;
 long int  n_conta;

	printf("Digite sua idade: "); scanf("%hd", &idade);
	printf("Digite o montante: "); scanf("%d", &montante);
	printf("Digite o numero da conta: "); scanf("%ld", &n_conta);
	printf("Alguem de %hd, depositou R$%d, na conta de numero: %ld\n",  &idade,  montante,  n_conta);
}

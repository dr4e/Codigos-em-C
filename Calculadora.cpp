#include <stdio.h>

int main(){
	float n1,n2;
	int opera;
	
	printf("Digite os dois numeros:");
	scanf("%f %f", &n1, &n2);
	printf("Escolha(Pelo Numero):\n 1-Soma\n 2-Subtracao\n 3-Multiplicacao\n 4-Divisao\n");
	scanf("%d", &opera);
	
	switch(opera){
		case 1:
			printf("Soma: %f", n1+n2);
			break;
		case 2:
			printf("Subtracao: %f", n1-n2);
			break;
		case 3:
			printf("Multiplicacao: %f", n1*n2);
			break;
		case 4:
			printf("Divisao: %f", n1/n2);
			break;
	}
	return 0;
}

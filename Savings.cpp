#include <stdio.h>
#include <stdlib.h>
#include "savings.h"
int main(){
	float saldo, tanb;
	printf("Insira o saldo da sua conta: ");
	scanf("%f", &saldo);
	printf("Insira o tanb da conta poupança: ");
	scanf("%f", &tanb);
	printf("%.10f\n",cp(saldo,tanb));
	system("pause");
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define TAM 25

int main (){
	int i;
	
	struct conta{
		int NR_CONTA;
		char TIP_CONTA;
		char NOME[30];
		float SALDO;
	};
	
	
	struct conta newcliente[10];
	struct conta oldcliente[10];

	printf ("\ninforme o nome do cliente\n");
	for (i=0; i<NOME;i++){
		scanf ("%29[^\n]", &newcliente[i].NOME);
	}
	
	
	fflush(stdin);
	
	printf ("\n informe o tipo da conta (1 char)\n");
	scanf ("%c", &newcliente[i].TIP_CONTA);
	
	newcliente.NR_CONTA = 3458;
	oldcliente.SALDO = 467.32;
	
	printf ("\n %d", newcliente.NR_CONTA);
	printf ("\n %c", newcliente.TIP_CONTA);
	printf ("\n %f", oldcliente.SALDO);
	printf ("\n %s", newcliente.NOME);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int buscaBin (int vet[], int n, int x);
int mostraVet(int vet[]);

int buscaBin (int vet[], int n, int *x){
	
	int i=0; 
	int fim= n-1;
	int meio= 0;
	
	printf ("\n digite o tamanho do vetor");
	scanf ("%d", &n);
	
	while (i <= fim){
		if (*x == vet[meio]){
			return 1;
		}else{
			if (*x < vet[meio]){
				fim = (meio - 1);
			}else{
				i = (meio + 1);
			}
		}
	}
	return 0;
}

int mostraVet(int *n, int vet[]){
	
	printf("\n O vetor eh: %d", vet[*n]);
}

int main (void){
	int *n;
	int *i; 
	int *fim;
	int *meio;
	int *x;
	
	int buscaBin();
	int mostraVet();
	
	
	
	return 0;
}

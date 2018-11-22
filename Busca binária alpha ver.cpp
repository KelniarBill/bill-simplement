#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int bolha(int *vetor[], int *num, int *aux, int k, int j);
int selecao(int *vetor[], int *num, int *aux, int k, int j, int *min);
int insercao(int *vetor[], int *num, int *aux, int k, int j, int *min);
int buscaBin(int *vetor[], int *key, int *n);
int buscaSeq(int *vetor[], int *key, int *n);
int mostraVet(int *vetor[]);
int menu(int *opcao, int *decisao);

int bolha(int *vetor[], int *num, int *aux, int k, int j) {
	for (k = 0; k < *num; k++) {
		printf("\n[%d]", k);
		for (j = 0; j < *num - 1; j++) {
			printf("%d,", j);

			if (*vetor[j] > *vetor[j + 1]) {
				*aux = *vetor[j];
				*vetor[j] = *vetor[j + 1];
				*vetor[j + 1] = *aux;
			}
		}
	}
	return 0;
}

int selecao(int *vetor[], int *num, int *aux, int k, int j, int *min) {
	for (k = 0; k < *num - 1; k++) {
		*min = k;
		for (j = k + 1; j < *num + 1; j++) {
			if (*vetor[j] < *vetor[*min]){
				*min = j;//posicao a ser trocada;
			}
		}
		if (k != *min) {
			*aux = *vetor[k];
			*vetor[k] = *vetor[*min];
			*vetor[*min] = *aux;
		}
	}
	return 0;
}
	
int insercao(int *vetor[], int *num, int *aux, int k, int j, int *min) {
	for (k = 1; k < (*num - 1); k++) {
		*aux = *vetor[k];
		j = k - 1;
		while (j >= 0) && (*vetor[j] > *aux){
			*vetor[j + 1] = *vetor[j];
			j--;
		}
		*vetor[j + 1] = *aux;
	}
	return 0;
}

int buscaBin(int *vetor[], int *key, int *n) {
	int menor, meio, superior;
	menor = 0;
	superior = *key - 1;
	while (menor <= superior) {
		meio = (menor + superior) / 2;
		if (key == *vetor[meio]) {
			return meio;
		}else{
			if (*key < *vetor[meio]) {
				superior = meio - 1;
			}else{
				menor = meio + 1;
			}
		}
	}
	return -1; //nao encontrado;

}

int buscaSeq(int *vetor[], int *key, int *n, int k) {
	for (k = 0; k < *n; k++) {
		if (*key == *vetor[k]) {
			return 1;
		}
	}
	return 0;
}

int mostraVet(int *n, int *vetor[]) {
	
	printf("\n putz ainda nao fiz essa parte kappa\n");
}

int menu(int opcao, int decisao) {
	inicio:
	system("cls");
	printf("\nBem vindo ao programa sobre metodos de ordenacao o/ \n");

	printf("\nBaseado no menu abaixo, favor escolher o metodo desejado \n");

	printf("1 metodo da bolha\n 2 metodo da selecao\n 3 metodo da insercao\n");

	printf("4 metodo da busca binaria\n 5 metodo da busca sequencial ou 6 para mostrar o vetor\n");

	printf("\n Caso nao queira acessar nenhum metodo, pressione 9 para encerrar o programa\n >:(\n");

	opcao = _getch();
	switch (opcao) {
	case '1':
		system("cls");
		bolha();
		break;
	case '2':
		system("cls");
		selecao();
		break;
	case'3':
		system("cls");
		insercao();
		break;
	case'4':
		system("cls");
		buscaBin();
		break;
	case '5':
		system("cls");
		buscaSeq();
		break;
	/*case'6':
		system("cls");
		mostraVet(int *n, int *vetor[]);*/
	case'9':
		system("cls");
		printf("\n Voce pediu para sair, encerrando programa em segundos... \n");
		Sleep(3000);//programa ira dormir por 3 segundos, depois o codigo ira continuar
		exit(0);
	default:
		printf("\n Peco que escolha uma opcao valida\n");
		printf("\n Pressione qualquer tecla para voltar ao menu\n");
		system("pause");
		goto inicio;
	}
}

int main(void) {
	menu();

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct {
	char nome[50];
	int idade;
}Pessoa;

void imprimirPessoa(char nome[], int indice, Pessoa listaPessoa[]) {
	if (strcmp(nome, listaPessoa[indice].nome) == 0) {
		printf("Nome: %s | Idade: %d.", listaPessoa[indice].nome, listaPessoa[indice].idade);
	}
}

int main() {
	srand(time(NULL));
	/*VERSAO USANDO NOME */
	/*Crie um array de Pessoa, e inclua 3 pessoas.Depois, crie uma função que recebe um nome, procure a pessoa pelo nome no array e imprima seus dados.*/
	Pessoa listaPessoa[3] = { {.nome = "Pedro", .idade = 29}, {.nome = "Vitor", .idade = 32}, {.nome = "Paulo", .idade = 20} };
	int indice = rand() % 3;
	char nome[50];
	strcpy(nome, listaPessoa[indice].nome);

	imprimirPessoa(nome, indice, listaPessoa);

	return 0;
}
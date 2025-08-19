#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
/*Crie um array de Pessoa, e inclua 3 pessoas.Depois, crie uma função que recebe um nome, procure a pessoa pelo nome no array e imprima seus dados.*/

typedef struct {
	char nome[50];
	int idade;
	float altura;
}Pessoa;

void imprimir_Pessoa(char nome[], int indice, Pessoa arrayPessoa[]) {
	printf("Nome: %s | Idade: %d | Altura: %.2f\n", arrayPessoa[indice].nome, arrayPessoa[indice].idade, arrayPessoa[indice].altura);
}

int main() {
	srand(time(NULL));
	int indice = rand() % 3;

	Pessoa arrayPessoa[3] = { {.nome = "Pedro", .idade = 29, .altura = 1.65}, {.nome = "Vitor", .idade = 32, .altura = 1.68}, {.nome = "Paulo", .idade = 20, .altura = 1.60} };
	char nome[50];
	strcpy(nome, arrayPessoa[indice].nome);

	imprimir_Pessoa(nome, indice, arrayPessoa);

	return 0;
}
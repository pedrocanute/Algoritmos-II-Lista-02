#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct { //criando a struct Pessoa
	char nome[50];
	int idade;
}Pessoa;

void imprimirPessoa(char nome[], int indice, Pessoa listaPessoa[]) { //função com argumento nome[](recebido da Main) indice (numero da posiçao no array) e o array listaPessoa[]
	if (strcmp(nome, listaPessoa[indice].nome) == 0) {//strcmp compara as strings se forem identicas, retorna 0
		printf("Nome: %s | Idade: %d.", listaPessoa[indice].nome, listaPessoa[indice].idade);
	}
}

int main() {
	srand(time(NULL));
	/*VERSAO USANDO NOME */
	/*Crie um array de Pessoa, e inclua 3 pessoas.Depois, crie uma função que recebe um nome, procure a pessoa pelo nome no array e imprima seus dados.*/
	Pessoa listaPessoa[3] = { {.nome = "Pedro", .idade = 29}, {.nome = "Vitor", .idade = 32}, {.nome = "Paulo", .idade = 20} };//atribui nome e idade para cada Pessoa no array de structs Pessoa
	int indice = rand() % 3;//sorteia de 0 a 2 o indice
	char nome[50];
	strcpy(nome, listaPessoa[indice].nome);//copia a string que esta na variavel nome da array de pessoas de acordo com o indice sorteado para a variavel nome na main

	imprimirPessoa(nome, indice, listaPessoa);// chama a funçao enviando nome, indice e o array de structs

	return 0;
}
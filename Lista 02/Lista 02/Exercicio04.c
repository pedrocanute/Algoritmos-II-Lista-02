//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>
//
//typedef struct {
//	char nome[50];
//	int idade;
//
//}Pessoa;
//
//void procurar_Pessoa(int numero, Pessoa listaPessoas[]) {
//	printf("Nome: %s \n", listaPessoas[numero].nome);
//	printf("Idade: %d \n", listaPessoas[numero].idade);
//}
//
//int main() {
//	Pessoa listaPessoas[3] = { { .nome = "Joao", .idade = 30 }, { .nome = "Vitor", .idade = 32 }, {.nome = "Pedro",.idade = 29 } };
//	srand(time(NULL));
//
//	int numero = rand() % 3;
//
//	procurar_Pessoa(numero, listaPessoas);
//
//	/*VERSAO USANDO SORTEIO*/
//	/*Crie um array de Pessoa, e inclua 3 pessoas.Depois, crie uma função que recebe um nome, procure a pessoa pelo nome no array e imprima seus dados.*/
//
//	return 0;
//}
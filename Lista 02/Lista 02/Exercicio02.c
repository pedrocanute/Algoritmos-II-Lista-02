#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
	float altura;
} Pessoa;

void ler_Struct(Pessoa usuario) {
	printf("Nome: %s | Idade: %d | Altura: %.2f", usuario.nome, usuario.idade, usuario.altura);

}

int main() {

	/*Crie uma função que recebe uma struct Pessoa e imprime seus dados.*/

	Pessoa usuario;
	char entrada[50];
	printf("Digite seu nome: ");
	scanf("%s", &entrada);
	strcpy(usuario.nome, entrada);

	printf("Digite sua idade e altura: ");
	scanf("%d %f", &usuario.idade, &usuario.altura);

	ler_Struct(usuario);

	return 0;
}
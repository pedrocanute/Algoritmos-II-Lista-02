//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//#include <stdbool.h>
//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//	struct {
//		char rua[50], cidade[50];
//		int numero;
//	} endereco;
//}Pessoa ;
//
//void ler_Dados(Pessoa dados) {
//	printf("%s , %d , %s",dados.endereco.rua, dados.endereco.numero, dados.endereco.cidade);
//}
//
//int main() {
//
//	Pessoa dados;
//	char rua[50], cidade[50];
//	printf("Digite sua Rua: ");
//	scanf("%s", rua);
//	strcpy(dados.endereco.rua, rua);
//
//	printf("\nDigite o Numero da residencia: ");
//	scanf("%d", &dados.endereco.numero);
//
//	printf("\nDigite sua Cidade: ");
//	scanf("%s", cidade);
//	strcpy(dados.endereco.cidade, cidade);
//
//	ler_Dados(dados);
//	/*Crie uma struct Endereco(rua, número, cidade) e inclua dentro da struct Pessoa.Crie uma função que recebe um struct Pessoa e imprime seu endereço*/
//
//
//	return 0;
//}
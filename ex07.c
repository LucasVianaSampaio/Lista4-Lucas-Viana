#include <stdio.h>
#include <string.h>
#define TAM 20

void inserir_dados(char *, char *);
void concatena(char *, char *);

int main()
{
  char nome[TAM];
  char sobrenome[TAM];

  inserir_dados(&nome, &sobrenome);
  concatena(&nome, &sobrenome);

  return 0;
}

void inserir_dados(char *pnome, char *psobrenome)
{
  printf("Digite seu nome abaixo:\n");
  fgets(pnome, TAM, stdin);
  printf("Digite seu sobrenome abaixo:\n");
  fgets(psobrenome, TAM, stdin);
}

void concatena(char *pnome, char *psobrenome)
{
  strcat(pnome, psobrenome);
  printf("Seu nome concatenado numa única string é: %s", pnome);
}
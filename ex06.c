#include <stdio.h>
#include <string.h>

#define TAM 10

void poe_nome(char *, char *);
void troca(char *, char *, char *);

int main()
{
  char nome[TAM];
  char sobrenome[TAM];
  char aux[TAM];

  poe_nome(&nome, &sobrenome);

  troca(&nome, &sobrenome, &aux);

  return 0;
}

void poe_nome(char *pnome, char *psobrenome)
{
  printf("Digite seu primeiro nome abaixo:\n");
  fgets(pnome, TAM, stdin);
  printf("Digite seu segundo nome abaixo:\n");
  fgets(psobrenome, TAM, stdin);
}

void troca(char *pnome, char *psobrenome, char *paux)
{
  strcpy(paux, pnome);
  strcpy(pnome, psobrenome);
  strcpy(psobrenome, paux);

  printf("Seu nome após a troca é: %s", pnome);
  printf("Seu sobrenome após a troca é: %s", psobrenome);
}
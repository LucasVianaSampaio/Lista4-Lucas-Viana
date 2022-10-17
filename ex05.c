#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void remove_enter(char *);
void tamanho(char *);

int main()
{
  char nome[TAM];

  printf("Digite seu nome abaixo:\n");
  fgets(nome, TAM, stdin);

  remove_enter(&nome);
  tamanho(&nome);

  return 0;
}

void remove_enter(char *pnome)
{
  int i = 0;
  while (*(pnome + i) != '\0')
  {
    if (*(pnome + i) == '\n')
    {
      *(pnome + i) = '\0';
    }
    i++;
  }
}

void tamanho(char *pnome)
{
  int i = 0;
  while (*(pnome + i) != '\0')
  {
    i++;
  }
  printf("O tamanho da palavra é: %d letras", i);
}

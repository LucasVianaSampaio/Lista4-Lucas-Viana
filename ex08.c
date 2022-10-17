#include <stdio.h>
#define TAM 10

void nome_letra(char *, char *);
void busca_letra(char *, char *);

int main(void)
{
  char nome[TAM];
  char letra;

  nome_letra(&nome, &letra);
  busca_letra(&nome, &letra);

  return 0;
}

void nome_letra(char *pnome, char *pletra)
{

  printf("Digite seu nome abaixo:\n");
  fgets(pnome, TAM, stdin);
  printf("Digite o caractere que deseja procurar:\n");
  scanf("%c", pletra);
}

void busca_letra(char *pnome, char *pletra)
{
  int i = 0;

  while (*(pnome + i) != '\0')
  {
    if (*(pnome + i) == *pletra)
    {
      printf("A letra está inclusa na palavra digitada");
      break;
    }
    i++;
  }
}
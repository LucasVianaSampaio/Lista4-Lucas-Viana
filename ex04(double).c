#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void imprime_vetor(double *pvetor);

int main()
{
  double vetor[TAM];

  printf("Digite %d valores do tipo inteiro para o vetor em questão:\n", TAM);
  for (int i = 0; i < TAM; i++)
  {
    scanf("%lf", &vetor[i]);
  }

  imprime_vetor(vetor);

  return 0;
}

void imprime_vetor(double *pvetor)
{
  printf("Os números digitados com seus respectivos endereços são:\n");
  for (int i = 0; i < TAM; i++)
  {
    printf("[%p] %lf\n", pvetor + i, *(pvetor + i));
  }

  // Percebe-se que dependendo do tipo da variável o espaço alocado na memória é maior ou menor. É notável também que os espaços alocados é um seguido ao outro porque se trata de um vetor
}
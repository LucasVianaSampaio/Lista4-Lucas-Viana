#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void imprime_vetor(float *pvetor);

int main()
{
  float vetor[TAM];

  printf("Digite %d valores do tipo inteiro para o vetor em questão:\n", TAM);
  for (int i = 0; i < TAM; i++)
  {
    scanf("%f", &vetor[i]);
  }

  imprime_vetor(vetor);

  return 0;
}

void imprime_vetor(float *pvetor)
{
  printf("Os números digitados com seus respectivos endereços são:\n");
  for (int i = 0; i < TAM; i++)
  {
    printf("[%p] %.2f\n", pvetor + i, *(pvetor + i));
  }
}
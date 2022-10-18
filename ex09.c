#include <stdio.h>
#define TAM 5

void inserir_valores(int *);
void ordenacao(int *, int *);

int main()
{
  int num[TAM], menor, aux;

  inserir_valores(&num);
  ordenacao(&num, &aux);

  return 0;
}

void inserir_valores(int *pnum)
{
  printf("Digite %d valores para que eles sejam colocados em ordem através da "
         "ordenação bolha\n",
         TAM);
  for (int i = 0; i < TAM; i++)
  {
    printf("Digite o valor inteiro:\n");
    scanf("%d", (pnum + i));
  }
}

void ordenacao(int *pnum, int *paux)
{
  for (int i = 0; i < TAM; i++)
  {
    for (int j = 0; j < TAM - 1; j++)
    {
      if (*(pnum + j) > *(pnum + (j + 1)))
      {
        *paux = *(pnum + j);
        *(pnum + j) = *(pnum + (j + 1));
        *(pnum + (j + 1)) = *paux;
      }
    }
  }

  for (int i = 0; i < TAM; i++)
  {
    printf("%d\t", *(pnum + i));
  }
}
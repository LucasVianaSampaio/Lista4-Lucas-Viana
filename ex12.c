#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarvetor(int *v, int n)
{
  v = calloc(n, sizeof(int));

  if (v == NULL)
  {
    printf("Não é possivel alocar memória");
    exit(1);
  }

  return v;
}

int **alocarmatriz(int **m, int n)
{

  m = calloc(n, sizeof(int *));

  if (m == NULL)
  {
    printf("Não é possivel alocar memória");
    exit(1);
  }

  for (int i = 0; i < n; i++)
  {
    *(m + i) = calloc(n, sizeof(int));
    if ((m + 1) == NULL)
    {
      printf("Não é possivel alocar memória");
      exit(1);
    }
  }

  return m;
}

int linhadamatriz(int x)
{

  if (x + 1 > 0 && x <= 3)
  {
    return x;
  }
  else if (x <= 5)
  {
    return x - 1;
  }
  else if (x <= 7)
  {
    return x + 1;
  }
  else if (x <= 9)
  {
    return x - 2;
  }
  else
  {
    return x + 2;
  }
}

void preenchervetor(int *x, int *y, int qtd, int maximo)
{

  for (int i = 0; i < qtd; i++)
  {
    *(x + i) = rand() % maximo;
    *(y + i) = linhadamatriz(*(x + i));
  }
}

void contadordefrenquencia(int *x, int *y, int **M, int n, int m)
{

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < n; k++)
      {
        if (*(x + i) == k && *(y + i) == j)
        {
          *(*(M + j) + k) += 1;
        }
      }
    }
  }
}

void mostrarvetor(int *v, int qtd)
{

  for (int i = 0; i < qtd; i++)
  {
    printf("%3d ", *(v + i));
  }
  printf("\n");
}

void mostrarmatriz(int **m, int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n; k++)
    {
      printf("%3d ", *(*(m + i) + k));
    }
    printf("\n");
  }
}

int main(void)
{

  int *x, *y, **M, m, n;

  printf("digite a dimensão da matriz[NxN] => ");
  scanf("%d", &n);

  M = alocarmatriz(M, n);

  printf("digite o tamanho dos vetores X & Y => ");
  scanf("%d", &m);

  x = alocarvetor(x, m);
  y = alocarvetor(y, m);
  srand(time(NULL));
  preenchervetor(x, y, m, n);

  puts("Valor dos vetores X & Y Respectivamente");

  mostrarvetor(x, m);
  mostrarvetor(y, m);

  puts("matriz referente a frequencia dos vetores(antes de contar afrequencia");

  mostrarmatriz(M, n);

  puts("Matriz de frequencia");
  contadordefrenquencia(x, y, M, n, m);
  mostrarmatriz(M, n);

  return 0;
}
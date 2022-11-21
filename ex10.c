#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarvetor(int tamanho) {
  int *v;
  v = malloc(tamanho * sizeof(int));

  if (v == NULL) {
    printf("espaço de memoria insuficiente\n");
    exit(1);
  }
  
  return v;
}

void preenchervetor(int *v, int qtd, int maximo) {
  srand(time(NULL));
  
  for (int i = 0; i < qtd; i++) {
    *(v + i) = rand() % maximo;
  }
  
}

void mostrarvetor(int *v, int qtd) {
  for (int i = 0; i < qtd; i++) {
    printf("%3d ", *(v + i));
  }
  printf("\n");
}

void inicializarfrequencia(int *f, int qtd) {
  
  for (int i = 0; i < qtd; i++) {
    *(f + i) = 0;
  }
  
}

void contadordefrenquencia(int *f, int tamanhof, int *x, int tamanhox) {
  for (int i = 0; i < tamanhof; i++) {
    for (int k = 0; k < tamanhox; k++) {
      if (*(x + k) == i) {
        *(f + i) += 1;
      }
    }
  }
  
}

int main(void) {
  int *x, *f, m, n;

  printf("Digite o tamanho do vetor X => ");
  scanf("%d", &m);
  printf("Digite o tamanho do vetor frequencia => ");
  scanf("%d", &n);
  
  x = alocarvetor(m);
  f = alocarvetor(n);

  preenchervetor(x, m, n);
  inicializarfrequencia(f, n);
  puts("Vetor X");
  mostrarvetor(x, m);
  contadordefrenquencia(f, n, x, m);

  for (int i = 0; i < n; i++) {
    printf("frequencida do numero %d: %d\n", i, *(f + i));
  }

  free(x);
  free(f);
  return 0;
}
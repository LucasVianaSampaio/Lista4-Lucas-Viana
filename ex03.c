#include <stdio.h>

void valor(int *, int *);

int main() {
  int x, menor;

  printf("Digite um número abaixo (Digite 0 para encerrar):\n");
  scanf("%d", &x);
  menor = x;

  valor(&x, &menor);

  printf("O menor valor fornecido é: %d", menor);

  return 0;
}

void valor(int *px, int *pmenor) {
  while (*px > 0) {
    printf("Digite mais um número abaixo(Digite 0 para encerrar):\n");
    scanf("%d", px);
    *px < *pmenor &&*px != 0 ? *pmenor = *px : *px;
  }
}
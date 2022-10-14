#include <stdio.h>

void troca(int *px, int *py, int *aux);

int main()
{
  int x = 10, y = 20, aux;

  printf("O primeiro valor é: %d\n", x);
  printf("O segundo valor é: %d\n", y);

  troca(&x, &y, &aux);

  printf("\nO primeiro valor pós mudança é: %d\n", x);
  printf("O segundo valor pós mudança é: %d\n", y);

  return 0;
}

void troca(int *px, int *py, int *aux)
{
  *aux = *px;
  *px = *py;
  *py = *aux;
}
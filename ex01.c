#include <stdio.h>

void somar(int *, int *, int *);
int main()
{
  int x, y, s;
  int *qx = &x, *qy = &y, *qs = &s;

  printf("Digite dois valores:\n");
  scanf("%d%d", qx, qy);

  somar(qx, qy, qs);

  printf("O resultado de [%p] %d + [%p] %d é: [%p] %d", qx, x, qy, y, qs, s);
}

void somar(int *px, int *py, int *ps)
{
  *ps = *px + *py;
}
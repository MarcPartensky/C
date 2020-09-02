#include <stdio.h>
#include <stdlib.h>

extern int a;

int main (void)
{
   int a;
  printf("\nEntrer un entier naturel (1 < n < 1000) : ");
  scanf("%llu", &a);
  printf(a);

}

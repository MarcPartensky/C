#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int Recherche, Nombre;
    puts("Nombre: ");
        scanf("%d", &Nombre);

    Recherche = 1;

    while (Recherche<sqrt(Nombre) {
      Recherche = Recherche + 1;
      while (Nombre % Recherche = 0) {
        printf("%d.\n", Recherche);
        Recherche = Recherche / 2;
      }
    }
    return 0;
}

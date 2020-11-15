#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ULL unsigned long long int

// je créée une fonction récursive qui renvoie le pgcd de deux nombres.
ULL pgcd(ULL a, ULL b)
{
    if (b == 0) return a;
    return pgcd(b,a%b); // fonction récursive qui s'auto-apelle :-)
}

int main(int argc, char * argv[]) {
    double temps;
    clock_t t1, t2;
    ULL d;
    ULL nbr1,nbr2;

    printf("\nEntrer un entier naturel (1 < n < 2^64-1) : ");
    scanf("%llu", &nbr1);
    printf("Entrer un entier naturel (1 < n < 2^64-1) : ");
    scanf("%llu", &nbr2);

    t1 = clock(); // ----- DEBUT -----
    d = pgcd(nbr1,nbr2);
    t2 = clock(); // ----- FIN -----

    printf("PGCD (%llu, %llu) = %llu\n",nbr1, nbr2, d);

    temps = (double)(t2-t1)/CLOCKS_PER_SEC;
    printf("temps d'execution en sec = %f\n", temps);

    return EXIT_SUCCESS;
}

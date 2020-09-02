#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// le type de variable ULL va de 0 à +18 446 744 073 709 551 615
// Je définis une macro rapide plutôt que de retaper à chaque fois le type
#define ULL unsigned long long int

// je définis une fonction créée par moi-même. Elle renvoie un entier (int) 0 ou 1 selon premier ou non et
// elle prends un entier ULL en argument, le nombre à tester.
// j'utilise cette fonction plus bas dans le programme principal int main......
int est_premier(ULL n)
{
	if ( n%2 == 0 ) return 0;

	for(ULL i = 3; i*i <= n ; i+=2) // c'est un cas particulier, je peux défnir la variable i dans la boucle FOR
	{
		if ( n%i == 0 ) return 0; // pas premier
	}

	return 1;   // premier
}

 // programme principal
int main(void) //Cette ligne ne change jamais, c'est la fonction principale
{
	// on dois définir toutes les variables à l'avance 95% du temps
	double temps;
   clock_t t1, t2;
   int premier;
   ULL nbr;

   // le type de variable ULL va de 0 à +18 446 744 073 709 551 615 soit 2^64-1
  printf("\nEntrer svp un entier naturel 2 < n < 2^64-1 : ");
  scanf("%llu", &nbr);

   t1 = clock(); // ----- DEBUT -----
   premier = est_premier(nbr); // j'utitilise la fonction définie à part plus haut
	t2 = clock(); // ----- FIN -----

	printf("Si le nbr est premier on affiche 1 sinon 0 :  %i\n", premier);

	temps = (double)(t2-t1)/CLOCKS_PER_SEC;
	printf("temps d'execution en sec = %f\n", temps);

	return EXIT_SUCCESS; // obligatoire, tout s'est bien terminé.
}

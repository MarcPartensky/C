#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ) {

  time_t start = time (NULL);

  srand(time(NULL));
  int Réponse=rand()%1000+100;
  int Tentative;
  Tentative = 0;
  int Essai;
  Essai = 0;

  while( Tentative != Réponse && Essai < 10 ) {
    Essai = Essai +1;
    printf( "\n ");
    printf( "\nEssai numéro: %d ", Essai);
    printf( "\nEntrer un nombre:");
    scanf("%d", &Tentative);
    if (Tentative > Réponse) {  printf( "Trop Grand"); }
    if (Tentative < Réponse) {  printf( "Trop Petit"); }
  }

  printf( "\n ");
  if (Tentative != Réponse) {
    printf("\nPerdu\n");
    printf("\nLa réponse était %d.\n", Réponse);
  } else {
    printf( "\nGagné!\n"); }
  printf ("Vous avez pris %d secondes.\n", (int) (time (NULL) - start));
  printf( "\n ");
  return 0;
}

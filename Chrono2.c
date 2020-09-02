#include <stdio.h>
#include <time.h>

int main (void)
{
   time_t start = time (NULL);

   getchar ();

   printf ("Duree = %ds\n", (int) (time (NULL) - start));
   return 0;
}

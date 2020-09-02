#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t today;
    struct tm an2000;

    an2000.tm_mday = 1;   /* 1er                */
    an2000.tm_mon  = 0;   /* janvier            */
    an2000.tm_year = 100; /* 2000 (2000 - 1900) */
    an2000.tm_hour = 0;   /* 0 heure            */
    an2000.tm_min  = 0;   /* 0 minute           */
    an2000.tm_sec  = 0;   /* 0 seconde          */

    today = time(NULL);

    printf("Il s'est coule %g secondes depuis le 1er janvier 2000 minuit.\n",
    difftime(today, mktime(&an2000)));

    time_t t = time(NULL); /* t contient maintenant la date et l'heure courante */
    printf("Le temps: %ld ", t );

    return 0;
}

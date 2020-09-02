#include <stdio.h>

#include <time.h>


int main(void)

{

    struct tm instant;

    int remplir;


    printf("Entrez le mois : ");

    scanf("%d", &remplir);

    instant.tm_mon = remplir-1;


    printf("Entrez le jour : ");

    scanf("%d", &remplir);

    instant.tm_mday = remplir-1;


    printf("Entrez l'heure : ");

    scanf("%d", &remplir);

    instant.tm_hour = remplir;


    printf("Entrez la minute : ");

    scanf("%d", &remplir);

    instant.tm_min = remplir;


    printf("Entrez la seconde : ");

    scanf("%d", &remplir);

    instant.tm_sec = remplir;


    printf("%d/%d ; %d:%d:%d", instant.tm_mon+1, instant.tm_mday+1, instant.tm_hour, instant.tm_min, instant.tm_sec);

    return 0;

}

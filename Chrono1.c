#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int mystere, nombreentre;
    clock_t temps;

    srand(time(NULL));
    mystere=rand()%100+1;

    do{
        puts("Quel est le nombre ? ");
        scanf("%d", &nombreentre);

        if(nombreentre>mystere)
            puts("C'est moins !\n");
        if(nombreentre<mystere)
            puts("C'est plus !\n");
        if(nombreentre==mystere){
            temps=clock();
            printf("Bravo !\nTu as mis %f secondes a trouver le nombre.\n", (double) temps/CLOCKS_PER_SEC);
        }
    }while(nombreentre!=mystere);

    return 0;
}

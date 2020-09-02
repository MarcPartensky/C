#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));
    int nbgen=rand()%1000+100;
    printf("%d\n",nbgen);
    return 0;
}

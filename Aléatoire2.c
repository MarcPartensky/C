#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int Random (int _iMin, int _iMax) {
    return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int main (void) {
    int iRandom;
    srand (time (NULL));
    iRandom = Random (50,100);
    printf ("Random : %d", iRandom);
    getch();
    return 0;
}

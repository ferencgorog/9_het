#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int choice(const int n, const int tomb[])
{
    srand(time(NULL));
    int temp = tomb[rand() % n];
    return temp;
}


int main()
{
    int szamok[10] = {12, 34, 45, 16, 1, 2, 56, 67, 9, 10};
    int meret = sizeof(szamok) / sizeof(szamok[0]);


    int szam = choice(meret, szamok);

    printf("A választott szám: %d\n", szam);

    return 0;
}
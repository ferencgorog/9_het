#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[])
{
    srandom(time(NULL));
    for (int i = n - 1; i >= 1; i--)
    {        
        int j = rand() % (i + 1);        
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }

    for(int i = 0; i < n; ++i)
    {
        printf("%d\n", tomb[i]);
    }
}

int main()
{
    int tomb[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int meret = sizeof(tomb) / sizeof(tomb[0]);
    shuffle(meret, tomb);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int meret = rand() % (12 - 8 + 1) + 8;
    char jelszo[meret];
    srandom(time(NULL));
    char spec[4] = ".,;'";
    jelszo[0] = (rand() % (90 - 65 + 1)) + 65;   // Nagybetű
    jelszo[1] = (rand() % (122 - 97 + 1)) + 97;  // Kisbetű
    jelszo[2] = (rand() % (57 - 48 + 1)) + 48;   // Szám
    jelszo[3] = spec[rand() % 3];
    
    
    for(int i = 4; i < meret; ++i)
    {
        int tipus = rand() % 4;
        if (tipus == 0) jelszo[i] = (rand() % 26) + 65;
        else if (tipus == 1) jelszo[i] = (rand() % 26) + 97;
        else if (tipus == 2) jelszo[i] = (rand() % 10) + 48;
        else
        {
            jelszo[i] = spec[rand() % 4];
        }
    }
    jelszo[meret] = '\0';
    printf("A jelszó: %s\n", jelszo);
    return 0;
}
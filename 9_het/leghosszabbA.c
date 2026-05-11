#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 500

int main(int argc, char* argv[])
{
    if(argc != 4)
    {
        fprintf(stderr, "Hiba! három argumentumot kell megadni!\n");
        exit(1);
    }
    
    srand(time(NULL));
    int line = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);
    char sor[4096];
    char* fajlnev = "out.txt";
    
    FILE *fp = fopen(fajlnev, "w");
    for(int i = 0; i < line; ++i)
    {
        int aktualis_hossz = rand() % (max - min + 1) + min;
        for(int j = 0; j < aktualis_hossz; ++j)
        {
            fprintf(fp, "%c", rand() % (126 - 32 + 1) + 32);
        }
        fprintf(fp, "\n");
    }


    fclose(fp);

    return 0;
}
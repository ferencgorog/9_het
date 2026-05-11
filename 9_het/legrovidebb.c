#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int min_hossz = 5000;
    if(argc == 1)
    {
        fprintf(stderr, "Hiba! Nem adtál meg egyetlen szót sem!\n");
        exit(1);
    }
    
    for(int i = 1; i < argc; ++i)
    {
        if(strlen(argv[i]) <= min_hossz)
        {
            min_hossz = strlen(argv[i]);
        }
    }
    for(int i = 1; i < argc; ++i)
    {
        if(strlen(argv[i]) == min_hossz)
        {
            printf("%s\n", argv[i]);
        }
    }

    
    return 0;
}
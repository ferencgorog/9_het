#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    char* fajlnev = "out.txt";
    FILE *fp = fopen(fajlnev, "r");
    int meret = 4096;
    char sor[meret];
    int max_hossz = 0;
    int max_sor_index = 0;
    int sor_szamlalo = 0;
    while(fgets(sor, meret, fp) != NULL)
    {
        ++sor_szamlalo;
        int karakterek = 0;
        
        for(int i = 0; sor[i] != '\0'; ++i)
        {
            if(sor[i] == '\n')
            {
                break;
            }
            ++karakterek;
        }

        if(karakterek > max_hossz)
        {
            max_hossz = karakterek;
            max_sor_index = sor_szamlalo;
        }
    }
    printf("%d %d\n", max_sor_index, max_hossz);
    fclose(fp);

    return 0;
}
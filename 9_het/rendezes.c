#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main(int argc, char* argv[])
{
    char* fajlnev = argv[1];
    char sor[MAX];
    FILE *fp = fopen(fajlnev, "r");
    if(fp == NULL || argc != 2)
    {
        fprintf(stderr, "Hiba a fájl megyitásakor!\n");
        exit(1);
    }

    int szamok[1000];
    int db = 0;

    while(fgets(sor, MAX, fp) != NULL)
    {
        szamok[db] = atoi(sor);
        ++db;
    }

    for(int i = 0; i < db; i++)
    {
        for(int j = 0; j < db; j++)
        {
            if(szamok[i] < szamok[j])
            {
                int tmp = szamok[i];
                szamok[i] = szamok[j];
                szamok[j] = tmp;
            }
        }
    }

    for(int i = 0; i < db; i++)
    {
        printf("%d\n", szamok[i]);
    }


    fclose(fp);
    return 0;
}
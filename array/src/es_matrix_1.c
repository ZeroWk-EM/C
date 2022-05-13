#include <stdio.h>

int main()
{
    int dimrows;
    int dimcols;
    printf("=============================\n");
    printf("Dammi la dimensione delle righe ");
    scanf("%d", &dimrows);
    printf("Dammi la dimensione delle colonne ");
    scanf("%d", &dimcols);
    printf("=============================\n");
    for (int i = 1; i <= dimrows; i++)
    {
        for (int j = 1; j <= dimcols; j++)
        {
            printf("[%d-%d]", i, j);
        }
        printf("\n");
    }
    printf("\n");
}
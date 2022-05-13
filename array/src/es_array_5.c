#include <stdio.h>

int main()
{
    int dim;
    long int tmp;
    printf("Definisci la lunghezza dell'array ");
    scanf("%d", &dim);
    int a[dim];
    printf("Dammi un SEED per generare l'array in maniera randomica ");
    printf("Riempimento automatico in corso...");
    printf("\n=============================\n");

    tmp = 20;
    printf("20\n");
    // Riempiento
    for (int i = 0; i < dim; i++)
    {
        tmp = (((tmp * 1000) / 35) / 3) / 4;
        if (tmp > 10000)
        {
            tmp = tmp / 50;
        }
        a[i] = tmp;
    }

    for (int i = 0; i < dim; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("\n=============================\n");

    tmp = 50;
    printf("50\n");
    for (int i = 0; i < dim; i++)
    {
        tmp = (((tmp * 1000) / 35) / 3) / 4;
        if (tmp > 10000)
        {
            tmp = tmp / 50;
        }
        a[i] = tmp;
    }

    for (int i = 0; i < dim; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("\n=============================\n");

    tmp = 20;
    printf("20\n");
    // Riempiento
    for (int i = 0; i < dim; i++)
    {
        tmp = (((tmp * 1000) / 35) / 3) / 4;
        if (tmp > 10000)
        {
            tmp = tmp / 50;
        }
        a[i] = tmp;
    }
    for (int i = 0; i < dim; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("\n=============================\n");
}
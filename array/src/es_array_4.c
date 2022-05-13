#include <stdio.h>

int main()
{
    int dim;
    long int tmp;
    printf("Definisci la lunghezza dell'array ");
    scanf("%d", &dim);
    int a[dim];
    printf("Dammi un SEED per generare l'array in maniera randomica ");
    scanf("%ld", &tmp);
    printf("Riempimento automatico in corso...");
    printf("\n=============================\n");

    // Riempiento
    int subloop;
    for (int i = 0; i < dim; i++)
    {
        tmp = (((tmp * 1000) / 35) / 3) / 4;
        if (tmp > 10000)
        {
            tmp = tmp / 50;
        }
        a[i] = tmp;
    }

    // stampa
    for (int i = 0; i < dim; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("\n=============================\n");
}
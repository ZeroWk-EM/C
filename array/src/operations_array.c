#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim;
    int loop = 1;
    int choice;

    // Massimo
    int max = 0;
    // Minimo
    int min = 0;
    // Media
    int half = 0;
    int sum = 0;

    printf("Definisci la lunghezza dell'array ");
    scanf("%d", &dim);
    printf("\n=============================\n");
    int a[dim];

    // Riempimento
    for (int i = 0; i < dim; i++)
    {
        printf("\nInserisci l'elemento di indice [%d] dell'array ", i);
        scanf("%d", &a[i]);
    }
    system("clear");
    printf("\n==========Array==============\n");
    do
    {
        for (int i = 0; i < dim; i++)
        {
            printf("[%d]", a[i]);
        }
        printf("\n=============================\n");
        printf("Cosa vuoi sapere?");
        printf("\n=============================");
        printf("\n1.Massimo\n2.Minimo\n3.Media\n4.Tutto\n0.Esci\n");
        printf("\nInserisci la tua scelta ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            max = a[0];
            for (int i = 0; i < dim; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
            }
            printf("Il valore massimo e' [%d]\n", max);
            printf("\n=============================\n");
            break;

        case 2:
            min = a[0];
            for (int i = 0; i < dim; i++)
            {
                if (min > a[i])
                {
                    min = a[i];
                }
            }
            printf("Il valore minimo e' [%d]\n", min);
            printf("\n=============================\n");
            break;

        case 3:
            for (int i = 0; i < dim; i++)
            {
                sum = sum + a[i];
            }
            half = sum / dim;
            printf("Il somma e' [%d]'", sum);
            printf("\nLa media dei valori risulta [%d]", half);
            printf("\n===========================\n");
            break;

        case 4:
            // MAX
            for (int i = 0; i < dim; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
            }
            // MIN
            min = a[0];
            for (int i = 0; i < dim; i++)
            {
                if (min > a[i])
                {
                    min = a[i];
                }
            }
            // half
            for (int i = 0; i < dim; i++)
            {
                sum = sum + a[i];
            }
            half = sum / dim;
            printf("\n===========================\n");
            printf("Il valore MAX e' [%d]\n", max);
            printf("Il valore MIN e' [%d]\n", min);
            printf("Il somme e' [%d]\n", sum);
            printf("La media e' [%d]\n", half);
            printf("===========================\n");
            break;

        case 0:
            loop = 0;
            break;
        }
    } while (loop == 1);
}
#include <stdio.h>
int main()
{
    int dim;
    printf("Indicami la dimensione dell'array ");
    scanf("%d", &dim);
    int a[dim];
    printf("\n=============================\n");
    printf("Riempi l'array con [%d] numeri", dim);
    printf("\n=============================");
    // Riempimento
    for (int i = 0; i < dim; i++)
    {
        printf("\nInserisci l'elemento di indice [%d] dell'array ", i);
        scanf("%d", &a[i]);
    }

    printf("\nI valori inseriti dall'utente sono:");
    printf("\n=============================\n");
    // Stampa
    for (int i = 0; i < dim; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("\n=============================\n");
}
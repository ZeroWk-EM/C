#include <stdio.h>
int main()
{
    int a[5];
    printf("Riempi l'array con cinque numeri");
    printf("\n=============================");
    // Riempimento
    for (int i = 0; i < 5; i++)
    {
        printf("\nInserisci l'elemento di indice [%d] dell'array ", i);
        scanf("%d", &a[i]);
    }

    printf("\nI valori inseriti dall'utente sono:");
    printf("\n=============================\n");
    // Stampa
    for (int i = 0; i < 5; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("\n=============================\n");
}
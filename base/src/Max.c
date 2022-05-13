#include <stdio.h>
int main()
{

    // Inizializzazione
    int a;
    int b;

    // Presa in carico dei parametri
    printf("Inserisci il primo numero\n");
    scanf("%d", &a);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &b);

    // Verifica
    if (a > b)
    {
        printf("A = [%d] e' maggioare di B = [%d]\n", a, b);
    }
    else
    {
        printf("B = [%d] e' maggioare di A = [%d]\n", b, a);
    }
}
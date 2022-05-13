#include <stdio.h>

int main()
{
    int x = 10;
    int expr = x * x + 10 * x - 2;
    printf("ESPRESSIONE (X*X)+(10*x)-2\n");
    printf("============================");
    for (x; x <= 20; x++)
    {
        printf("\nCON X=[%d] il risultato della funzione e' ", x);
        expr = (x * x) + (10 * x) - 2;
        printf("[%d]", expr);
    }
    printf("\n============================\n");
}
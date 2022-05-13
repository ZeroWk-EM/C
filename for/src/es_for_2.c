#include <stdio.h>

int main()
{
    int x;
    int expr;
    printf("ESPRESSIONE (X*X)+(10*x)-2");
    printf("\n============================");
    for (x = 20; x >= 10; x--)
    {
        expr = (x * x) + (10 * x) - 2;
        if (expr % 2 == 0)
        {
            printf("\nCON X=[%d] il risultato della funzione e' ", x);
            printf("[%d]", expr);
        }
    }
    printf("\n============================\n");
}
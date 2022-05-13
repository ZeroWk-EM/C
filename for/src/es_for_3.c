#include <stdio.h>

int main()
{
    int x;
    int expr;
    int loop = 1;
    printf("ESPRESSIONE (X*X)+(10*x)-2");
    printf("\n============================\n");
    printf("Scegli un numero: ");
    scanf("%d", &x);
    printf("============================\n");
    while (loop == 1)
    {
        if (x > 0)
        {
            loop = 0;
            break;
        }
        else
        {
            printf("\nDevi inserire un numero maggiore di zero: \n");
            scanf("%d", &x);
            printf("\n============================");
        }
    }
    printf("\n");
    for (;; x--)
    {
        expr = (x * x) + (10 * x) + 10;
        if (expr > 0)
        {
            printf("CON x=[%d] il risultato della funzione e' ", x);
            printf("[%d]", expr);
        }
        else if (expr < 0)
        {
            printf("============================");
            printf("\nCON x=[%d] ", x);
            printf("il risultato della funzione e' negativo infatti y=[%d]\n", expr);
            break;
        }
        printf("\n");
    }
}
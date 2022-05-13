#include <stdio.h>
int main()
{
    int num;
    printf("Inserisci un numero\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Il numero inserito [%d] e' positivo\n", num);
    }
    else if (num == 0)
    {
        printf("Il numero inserito [%d] e' uguale a 0\n", num);
    }
    else
    {
        printf("Il numero inserito [%d] non e' positivo\n", num);
    }
}

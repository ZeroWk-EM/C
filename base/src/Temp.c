#include <stdio.h>
int main()
{
    int temp;
    printf("Inserisci la temperatura dell'ambiente\n");
    scanf("%d", &temp);

    if (temp >= 25)
    {
        printf("Fa caldo\n");
    }
    printf("Si sta bene\n");
}
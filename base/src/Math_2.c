#include <stdio.h>
int main()
{
    float base, altezza, area;

    printf("Digita la base\n");
    scanf("%f", &base);

    printf("Digita la altezza\n");
    scanf("%f", &altezza);

    area = (base * altezza) / 2;
    printf("Base [%f] x Altezza [%f] = Area %f\n", base, altezza, area);
}
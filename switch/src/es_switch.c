#include <stdio.h>
#include <stdlib.h>

int main()
{
    // VAR MENU 1
    int loop = 1;
    int choice;

    // VAR MENU 2
    int subloop = 1;
    int subchoice;

    // VAR ES 1
    int iesimo;
    char carattere;
    int cont;

    // VAR ES 2
    int sum;
    int add;
    int icicle;
    int cicle;

    // VAR ES 3
    int sum2;
    int number;
    int repet;
    int cicle2;

    // VAR ES 4
    int cont3;
    int cicle3;
    int number2;
    int max;

    // VAR ES 5
    int cont4;

    // VAR SUB-MENU 3
    int sommaris = 2 + 2;

    // VAR SUB-MENU 4
    int sommaris2 = (2 + 2) * 5 + 4;

    printf("\n============================\n");
    printf("C.PROGRAMM Ver 1.0\n");
    do
    {
        printf("Che sottoprogramma vuoi eseguire?");
        printf("\n1.Stampa X volte un carattere\n2.Somma n numeri\n3.Tabbellina\n4.Max di n numeri\n5.Sub-menu\n6.Ciclo FOR\n0. Per uscire");
        printf("\n============================\n");
        printf("DIGITA UN NUMERO ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:         // Stampa 100 volte un carattere
            iesimo = 0; // Azzero i valori nel caso si dovesse far girare di nuovo il programma
            cont = 0;
            system("clear");
            printf("\nStampa X volte un carattere\n");
            printf("============================\n");
            printf("Che carattere vuoi stampare? ");
            scanf(" %c", &carattere);
            printf("Quante volte lo vuoi stampare? ");
            scanf("%d", &cont);
            // printf("DEBUG [%c][%d]\n", carattere, cont);
            printf("============================\n");
            while (iesimo < cont)
            {
                printf("[%c]", carattere);
                iesimo++;
            }
            printf("\n============================\n");
            break;

        case 2: // Somma n numeri
            cicle = 0;
            icicle = 0;
            sum = 0;
            system("clear");
            printf("\nSomma n numeri\n");
            printf("============================\n");
            printf("Quanti numeri vuoi sommare? ");
            scanf("%d", &cicle);

            while (icicle < cicle)
            {
                printf("Inserisci il [%d]° numero ", icicle);
                scanf("%d", &add);
                printf("[%d]+[%d]", sum, add);
                sum = sum + add;
                printf("=[%d]\n", sum);
                icicle++;
            }
            printf("============================\n");
            break;

        case 3:
            cicle2 = 0;
            sum2 = 0;
            system("clear");
            printf("\nSomma n volte un numero\n");
            printf("============================\n");
            printf("Dimmi un numero ");
            scanf("%d", &number);
            printf("Quante volte devo ripetere la somma ");
            scanf("%d", &repet);
            printf("[%d]x[%d]", number, repet);
            while (cicle2 < repet)
            {
                sum2 = sum2 + number;
                cicle2++;
            }
            printf("=[%d]\n", sum2);
            printf("============================\n");
            break;

        case 4:
            system("clear");
            cicle3 = 0;
            max = 0;
            printf("\nMax di n numeri\n");
            printf("============================\n");
            printf("\nDi quanti numeri vuoi controllare il massimo ");
            scanf("%d", &cont3);
            while (cicle3 < cont3)
            {
                printf("Inserisci il [%d]° numero ", cicle3);
                scanf("%d", &number2);
                if (max > number2)
                {
                    max = max;
                }
                else
                {
                    max = number2;
                }
                cicle3++;
            }
            printf("\nIl massimo è [%d]", max);
            printf("\n============================\n");
            break;

        case 5:
            system("clear");
            printf("\nSub-menu\n");
            printf("============================\n");
            do
            {
                printf("Che sottoprogramma vuoi eseguire?");
                printf("\n1.Stampa 'PIPPO'\n2.Stampa 'PLUTO'\n3.Stampa il risultato 2+2\n4.Stampa risultato di (2+2)*5+4\n0.Esci");
                printf("\n============================\n");
                printf("DIGITA UN NUMERO ");
                scanf("%d", &subchoice);
                switch (subchoice)
                {
                case 1:
                    system("clear");
                    printf("PIPPO");
                    printf("\n============================\n");
                    break;

                case 2:
                    system("clear");
                    printf("PLUTO");
                    printf("\n============================\n");
                    break;

                case 3:
                    system("clear");
                    printf("Il risultato è [%d]", sommaris);
                    printf("\n============================\n");
                    break;

                case 4:
                    system("clear");
                    printf("Il risultato è [%d]", sommaris2);
                    printf("\n============================\n");
                    break;

                case 0:
                    subloop = 0;
                    system("clear");
                    break;

                default:
                    printf("============================");
                    printf("\nIl numero inserito non è corretto\n");
                    printf("============================\n");
                    break;
                }

            } while (subloop == 1);
            break; // chiude case5

        case 6:
            system("clear");
            printf("\nCiclo FOR\n");
            printf("============================\n");
            printf("Quante volte vuoi stampare la frase? ");
            scanf("%d", &cont4);
            printf("============================\n");
            for (int j = 0; j < cont4; j++)
            {
                printf("Questa parola è stata stampata per [%d]\n", j);
            }

        case 0:
            loop = 0;
            break;

        default:
            printf("============================");
            printf("\nIl numero inserito non è corretto\n");
            printf("============================\n");
            break;
        }

    } while (loop == 1);
}
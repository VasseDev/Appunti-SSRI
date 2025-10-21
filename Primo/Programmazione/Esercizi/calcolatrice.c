#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double numero1, numero2, risultato;
    int operatore;

    while (1)
        {
        do {
            printf("Inserire il valore del primo operando: ");
            scanf("%lf", &numero1);
            printf("Inserire il valore del secondo operando: ");
            scanf("%lf", &numero2);

            printf("Inserire l'operatore (somma=1, sottrazione=2, moltiplicazione=3, divisione=4, esci=0): ");
            scanf("%d", &operatore);
        } while ((operatore == 4 && numero2 == 0) || (operatore != 1 && operatore != 2 && operatore != 3 && operatore != 4 && operatore != 0));

        switch (operatore)
        {
        case 1:
            risultato = numero1 + numero2;
            break;
        case 2:
            risultato = numero1 - numero2;
            break;
        case 3:
            risultato = numero1 * numero2;
            break;
        case 4:
            if (numero2 != 0)
                risultato = numero1 / numero2;
            break;
        case 0:
            return 0;
        default:
            printf("Operazione non eseguibile");
            return 1;
        }

        printf("Il risultato è: %lf\n", risultato);
    }

    return 0;
}

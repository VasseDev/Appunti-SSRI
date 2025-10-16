#include <stdio.h>
#include <stdlib.h>

void risoluzione(int a, int b, int x, int y, int sol)
{
    int temp, numero_operazioni, secchio1, secchio2;

    printf("\n=== Inizio operazioni ===\n");

    if (y > x)
    {
        temp = a;
        a = b;
        b = temp;

        temp = x;
        x = y;
        y = temp;
    }

    numero_operazioni = abs(x);
    secchio1 = 0;
    secchio2 = 0;
    while (secchio1 != sol && secchio2 != sol)
    {
        // riempimento
        if (secchio1 == 0) 
        {
            secchio1 = a;
            printf("Riempio secchio %d -> (%d, %d)\n", a, secchio1, secchio2);
        }

        // travaso
        if (secchio1 <= b - secchio2)
        {
            secchio2 += secchio1;
            secchio1 = 0;
        }
        else
        {
            secchio1 -= b - secchio2;
            secchio2 += b - secchio2;
        }
        printf("Travaso secchio %d in secchio %d -> (%d, %d)\n", a, b, secchio1, secchio2);
        
        // svuotamento
        if (secchio2 == b && secchio2 != sol)
        {
            secchio2 = 0;
            printf("Svuoto secchio %d -> (%d, %d)\n", b, secchio1, secchio2);
        }
    }
}

int euclide(int a, int b)
{   
    if (b > a)
    {
        int temp;
        temp = b;
        b = a;
        a = temp;
    }

    if (b != 0)
    {   
        int r = a % b;
        a = b;
        b = r;
        a = euclide(a, b);
    }

    return a;
}

int main(int argc, char const *argv[])
{
    int a, b, c, x, y, mcd, flag;
    
    printf("Inserisci la dimensione del primo secchio: ");
    scanf("%d", &a);
    printf("Inserire la dimensione del secondo secchio: ");
    scanf("%d", &b);
    printf("Inserire la qauntità che si vuole ottenere: ");
    scanf("%d", &c);

    mcd = euclide(a, b);

    if (c % mcd != 0)
    {
        printf("Operazione non eseguibile\n");
        return 1;
    }

    x = -abs(b)/mcd;
    flag = 0;

    while (x <= abs(b)/mcd && !flag)
    {
        y = -abs(a)/mcd;
        while (y <= abs(a)/mcd && !flag)
        {
            if (a * x + b * y == c)
            {
                flag = 1;
            }
            else
            {
                y++;
            }
        }
        if (!flag) 
        {
            x++;
        } 
    }

    printf("\nL'identità di Bezout\n(%d * %d) + (%d * %d) = %d\nè verificata.\n", a, x, b, y, c);

    risoluzione(a, b, x, y, c);

    return 0;
}

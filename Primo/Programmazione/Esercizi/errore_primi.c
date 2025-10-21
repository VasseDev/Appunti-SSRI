#include <stdio.h>

int main() 
{
    int i, j;
    int n;
    int flag;

    do
    {
        printf("Inserisci una cifra massima per calcolare i numeri primi: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Numeri primi fino a %d:\n", n);

    for (i = 3; i <= n; i+=2)
    {
        flag = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j != 0)
                flag = 1;
        }

        if (flag)
            printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;
    int flag;
    int modulo;

    do {
        printf("Inserire un numero: ");
        scanf("%d", &numero);
    } while(numero<=0);

    printf("Numeri primi inferiori di %d:\n", numero);
    for (int i = 3; i < numero; i+=2)
    {
        flag = 1;
        for (int j = 2; j < i; j++)
        {
            modulo = i%j;
            if (modulo == 0)
                flag = 0;
        }
        if (flag)
            printf("%d\n", i);   
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

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

    printf("Inserire il primo numero dell'identità di Bezout: ");
    scanf("%d", &a);
    printf("Inserire il secondo numero dell'identità di Bezout: ");
    scanf("%d", &b);

    mcd = euclide(a, b);

    x = -abs(b)/mcd;
    flag = 0;

    while (x <= abs(b)/mcd && !flag)
    {
        y = -abs(a)/mcd;
        while (y <= abs(a)/mcd && !flag)
        {
            if (a * x + b * y == mcd)
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

    printf("\nL'identità di Bezout\n(%d * %d) + (%d * %d) = %d\nè verificata.\n", a, x, b, y, mcd);
    
    return 0;
}

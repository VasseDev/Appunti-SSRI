#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, e;
    c = 3;
    e = 5;

    e = 30 / e++ + 29 % c;

    printf("%d\n", e);

    return 0;
}

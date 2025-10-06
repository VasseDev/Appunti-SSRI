#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {

    char var1 = 'a';
    char var2;

    int var3 = INT_MAX;
    int var4 = var3 + 1;
    
    // stampo il valore var3
    printf("Il valore numerico di %d è %d.\n", var3, var4);

    var2 = var1 - 32;

    printf("Il valore numerico di %c è %d.\n", var2, var2);

    return 0;
}
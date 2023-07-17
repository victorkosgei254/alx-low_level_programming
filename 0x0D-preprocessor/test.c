#include <stdio.h>
#include <stdlib.h>
#include "3-function_like_macro.h"

int main(int agrc, char**argv)
{

    int i, j;
    
    i = ABS(-98) * 10;
    j = ABS(98) * 10;

    printf("Results for (i) = %d and (j) = %d\n", i, j);
    return (EXIT_SUCCESS);
}

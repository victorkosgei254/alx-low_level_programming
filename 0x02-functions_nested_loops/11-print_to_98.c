#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
    int start;

    if(n < 98)
    {
        for( start = n ; start < 98; start++)
        {
            printf("%d, ", start);
        }
        printf("%d\n", start);
    }
    else if(n > 98)
    {
        for( start = n; start > 98; start--)
        {
            printf("%d, ", start);
        }
        printf("%d\n",start);
    }
    else
    {
        printf("%d\n", n);
    }
    return;
}

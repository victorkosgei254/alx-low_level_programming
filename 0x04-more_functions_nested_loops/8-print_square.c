#include "main.h"

void print_square(int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for( j= 0; j < n; j++)
        {
            _putchar(35);
        }
        _putchar('\n');
    }
    return;
}

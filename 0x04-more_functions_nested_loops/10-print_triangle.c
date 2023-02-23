#include "main.h"

void print_triangle(int size)
{
    int i, j, k;

    for(i =0; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            _putchar(32);
        }
        for( k= 0; k < i; k++ )
        {
            _putchar(35);
        }
        _putchar('\n');
    }
    return;
}



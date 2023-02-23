#include "main.h"

void print_line(int n)
{
    int i;

    if( n <= 0)
    {
        return;
    }
    for( i=0; i < n; i++)
    {
        _putchar(95);
    }
    _putchar('\n');
    return;
}

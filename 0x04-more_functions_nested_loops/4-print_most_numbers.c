#include "main.h"

void print_most_numbers(void)
{
    int i;

    for(i = 48; i < 59; i++)
    {
        if( !((i == 50) || (i == 52)) )
        {
            _putchar(i);
        }
    }
    _putchar('\n');
    return;
}

#include "main.h"
void jack_bauer(void)
{
    int hour, min;

    for( hour = 0; hour < 24 ; hour++ )
    {
        for( min = 0; min < 60; min++ )
        {
            _putchar(hour);
            _putchar(':');
            _putchar(min);
            _putchar('\n');
        }
    }
    return;
}

#include "main.h"
void times_table(void)
{
    int i,j,prod;

    for( i = 0; i < 10; i++ )
    {
        _putchar(0+'0');
        _putchar(',');
        _putchar(' ');
        for( j = 1; j < 9; j++)
        {
            prod = i*j;
            if(prod > 9)
            {
            _putchar(((prod - prod%10)/10) + '0');
            _putchar((prod%10) + '0');
            _putchar(',');
            _putchar(' ');
            }
            else
            {
                _putchar(' ');
                _putchar((i*j) + '0');
                _putchar(',');
                _putchar(' ');
            }
        }
        prod = i*j;
            if(prod > 9)
            {
            _putchar(((prod - prod%10)/10) + '0');
            _putchar((prod%10) + '0');
            }
            else
            {
                _putchar(' ');
                _putchar((i*j) + '0');
            }
        _putchar('\n');
    }
    return;
}

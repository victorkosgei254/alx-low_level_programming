#include "main.h"
void times_table(void)
{
    int i,j,prod;

    for( i = 0; i < 10; i++ )
    {
        for( j = 0; j < 10; j++)
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
        _putchar('\n');
    }
    return;
}

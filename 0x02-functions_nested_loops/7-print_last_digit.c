#include "main.h"
int print_last_digit(int n)
{
    int last_digit;
    
   if(n == -2147483648)
    {
        _putchar(8);
        return 8;
    }
   else if(n < 0 )
    {
        n = n*-1;
    }
 
    last_digit = n%10;
    _putchar(last_digit + '0');
    return last_digit;
}

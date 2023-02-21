/**
 * print_times_table -function that prints timetable
 * @n -length of time table 
 *
 * Returns: void
 */
void print_times_table(int n)
{
    int i,j,prod;

    for( i = 0; i < n; i++ )
    {
        _putchar(0+'0');
        _putchar(',');
        _putchar(' ');
        for( j = 1; j < 9; j++)
        {
            prod = i*j;
            if((prod > 9) && (prod < 99))
            {
                _putchar(' ');
                _putchar(((prod - prod%10)/10) + '0');
                _putchar((prod%10) + '0');
                _putchar(',');
                _putchar(' ');
            }
            if(prod > 99)
            {
                _putchar(((prod -prod%100)/100) +'0');
                _putchar(((prod-prod%10)/10)+'0');
                _putchar((prod%10)+'0');
                _putchar(',');
                _putchar(' ');

            }
            else
            {
                _putchar(' ');
                _putchar(' ');
                _putchar((i*j) + '0');
                _putchar(',');
                _putchar(' ');
            }
        }
        prod = i*j;
        if((prod > 9) && (prod < 99))
        {
            _putchar(' ');
            _putchar(((prod - prod%10)/10) + '0');
            _putchar((prod%10) + '0');
        }
        else if(prod >99)
        {
            _putchar(((prod-prod%100)/100)+'0');
            _putchar(((prod-prod%10)/10)+'0');
            _putchar((prod%10)+'0');
            else
            {
                _putchar(' ');
                _putchar(' ');
                _putchar((i*j) + '0');
            }
            _putchar('\n');
        }
        return;
    }

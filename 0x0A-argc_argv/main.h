#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);

/**
 * print - function to print string
 * @s: string to be printed
 */

void print(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * str_toint - function that receives a string and converts to int
 * @s: string to be converted
 *
 * Return: int
 */
int str_toint(char *s)
{
	int results, flag;

	results = 0, flag = 1;
	if (*s == '-')
	{
		flag = -1;
		s++;
	}
	while (*s != '\0')
	{
		results = (results * 10 ) + (*s - '0');
		s++;
	}
	return (results * flag);
}
void print_num(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = x * -1;
	}
	else if (x == 0)
	{
		_putchar('0');
	}
	while (x != 0)
	{
		_putchar((x % 10) + '0');
		x = (x - (x % 10)) / 10;
	}
	_putchar('\n');
}
#endif

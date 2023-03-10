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
#endif

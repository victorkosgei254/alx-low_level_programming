#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar -function that prints a charachete
 * @c -Character input
 *
 * Return interger
 */
int _putchar(char c);
/**
 * _isupper -Function that checks if  character is in upper or lower
 * @c -Character to be checked 
 *
 * Return 1 if is upper, 0 otherwise 
 */
int _isupper(char c);
/**
 * _isdigit -Function that checks if input is a digint
 * @c -character to be checked 
 *
 * Return 0 if its a digit, 1 if its not 
 */
int _isdigit(char c);
/**
 * mul -Function that multiplies 2 intergers
 * @a -integer to be muliplied
 * @b -second integer to be multiplied 
 *
 * Return a*b, product of @a and @b
 */
int mul(int a, int b);
/**
 * print_numbers -Function that print numbers from 0 to 9
 *
 * Returns void
 */
void print_numbers(void);
/**
 * print_most_numbers -Function that prints numbers from 0 to 9 except 2 and 4
 *
 * Returns void
 */
void print_most_numbers(void);
/**
 * more_numbers -Function that prints numbers from 0-14 10 times
 *
 * Returns void
 */
void more_numbers(void);
/**
 * print_line -Function that draws a straght line in the terminal
 * @n -length of the line 
 *
 * Return void 
 */
void print_line(int n);
/**
 * print_diagonal -Function that draws a diagonal line 
 * @n -length of the diagonal line 
 *
 * Return void
 */
void print_diagonal(int n);
/**
 * print_square -Function that prints square 
 * @size -size of the square
 *
 * Return void
 */
void print_square(int size);
/**
 * print_triangle -Function that prints triangle
 * @size -size of the triangle 
 *
 * Return void
 */
void print_triangle(int size);
#endif

#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name to be printed
 * @f: Function pointer that receives a char as argument
 * 
 * Return:
*/
void print_name(char *name, void (*f)(char *))
{
    f(name);
}

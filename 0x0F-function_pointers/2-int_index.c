#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array to be searched
 * @size: Size of the array
 * @cmp: Pointer of the function to be executed
 * 
 * Return: Index of first element for which cmp does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0)
    {
        return (-1);
    }

    for (i = 0;i < size; i++)
    {
        if (cmp(array[i]) != 0)
        {
            return (i);
        }
    }

    return (0);
}

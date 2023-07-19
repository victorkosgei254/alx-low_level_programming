#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 * @array: Array to be iterated
 * @size: The size of the array
 * @action: Pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    for (i = 0;i < size; i++)
    {
        action(array[i]);
    }
}

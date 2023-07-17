#include <stdlib.h>

#include "main.h"

/**
 * _realloc - Function to reallocate memory
 * @ptr: pointer to existing address
 * @old_size: size of the old address
 * @new_size: size of the new address
 * 
 * Return: Address of newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
     if (new_size == old_size)
    {
        return (ptr);
    }


    char* tmp;
    char* ptr_copy;
    int i;
    
    ptr_copy = ptr;
    tmp = malloc(old_size);
    for (i = 0; i < old_size; i++)
    {
        *(tmp+i) = (char)(ptr_copy+i);
    }

    if (new_size > old_size)
    {
       ptr = malloc(new_size);
       for (i = 0; i < old_size; i++)
       {
        ptr[i] = tmp[i];
       }
    }

   

    if (ptr == NULL)
    {

    }

    if ((new_size == 0) && (ptr != NULL))
    {

    }
}
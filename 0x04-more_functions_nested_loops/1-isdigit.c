#include "main.h"

int _isdigit(int c)
{
    if( !((c > 47) && (c < 59)) )
    {
        return (0);
    }
    return (1);
}

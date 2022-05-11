#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate memory
 *@b: number of memory
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{

exit(98);
return (NULL);
}

return (ptr);
}

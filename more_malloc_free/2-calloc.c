#include <stdlib.h>
/**
 *_calloc-Allocates memory for an array using malloc.
 *@nmemb:The number of elements in the array.
 *@size:The size of each element in bytes.
 *Return:Pointer to the allocated memory.
 *If nmemb or size is 0, returns NULL.
 *If malloc fails, returns NULL.
 *The allocated memory is set to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory;
unsigned int i, total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
memory = malloc(total_size);
if (memory == NULL)
return (NULL);
for (i = 0; i < total_size; i++)
memory[i] = 0;
return (memory);
}

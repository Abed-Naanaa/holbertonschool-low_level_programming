#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to free
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);  /* Free memory allocated for the name */
        free(d->owner); /* Free memory allocated for the owner */
        free(d);        /* Free the structure itself */
    }
}

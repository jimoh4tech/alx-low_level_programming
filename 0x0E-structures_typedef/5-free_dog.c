#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - discard the dog from memory
 * @d: pointer to the dog struct
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

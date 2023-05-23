#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - as the name implies
 *@d - free struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: A pointer to a dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}

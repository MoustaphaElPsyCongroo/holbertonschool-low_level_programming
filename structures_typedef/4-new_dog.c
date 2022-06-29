#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: A dog_t struct dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int j = 0;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL || name == NULL || owner == NULL || age < 0)
		return (NULL);

	while (name[i])
		i++;

	while (owner[j])
		j++;

	dog->name = malloc(sizeof(char) * (i + 1));
	dog->owner = malloc(sizeof(char) * (j + 1));

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (j = 0; owner[j]; j++)
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';

	dog->age = age;

	return (dog);
}

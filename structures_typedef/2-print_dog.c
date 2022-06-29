#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: A pointer to a struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");

		if (d->age < 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %.6f\n", d->age);

		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}

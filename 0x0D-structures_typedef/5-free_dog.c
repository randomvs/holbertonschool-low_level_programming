#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dog from memory
 * @hobbes: dog object
 * Return: nothing
 **/
void free_dog(dog_t *hobbes)
{
	if (hobbes == NULL)
		return;
	if (hobbes->owner != NULL)
		free(hobbes->owner);
	if (hobbes->name != NULL)
		free(hobbes->name);

	free(hobbes);
}

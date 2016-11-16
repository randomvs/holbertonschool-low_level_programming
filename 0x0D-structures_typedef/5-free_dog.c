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
	free(hobbes->owner);
	free(hobbes->name);
	free(hobbes);
}

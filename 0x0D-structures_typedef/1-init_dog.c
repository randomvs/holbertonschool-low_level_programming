#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - create dog in function
 * @hobbes: dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog, NULL if fails
 **/
void init_dog(struct dog *hobbes, char *name, float age, char *owner)
{
	if (hobbes == NULL)
		return;
	hobbes->name = name;
	hobbes->age = age;
	hobbes->owner = owner;
}

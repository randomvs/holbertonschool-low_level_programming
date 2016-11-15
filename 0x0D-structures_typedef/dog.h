#include <stdio.h>
#include <stdlib.h>

struct Dog
{
	char *name;
	float *age;
	char *owner;
};

struct Dog *new_dog(char *name, float *age, char *owner)
{
	struct Dog *dog;

	dog = malloc(sizeof(struct Dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return dog;
}

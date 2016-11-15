#include <stdio.h>
#include <stdlib.h>
#ifndef DOG
#define DOG
/**
 * struct dog - dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog new_dog - create dog in function
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: dog, NULL if fails
 **/
struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *hobbes;

	hobbes = malloc(sizeof(struct dog));
	if (hobbes == NULL)
		return (NULL);
	hobbes->name = name;
	hobbes->age = age;
	hobbes->owner = owner;
	return (hobbes);
}
#endif

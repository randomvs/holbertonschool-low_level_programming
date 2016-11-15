#include <stdio.h>
#include <stdlib.h>
#ifndef DOGGY
#define DOGGY
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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

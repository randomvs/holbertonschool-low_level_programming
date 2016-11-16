#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 **/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif

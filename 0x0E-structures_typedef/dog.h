#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * doggy - typedet for struct dog
 */

typedef struct dog doggy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

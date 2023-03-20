#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a new type dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_2 - Define a new type dog_t as a new name for the type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

typedef struct dog_2
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to newly created dog. 0 otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	int name_counter, owner_counter, i;

	dog_ptr = malloc(sizeof(*dog_ptr));
	if (dog_ptr == NULL || name == NULL || owner == NULL)
	{	free(dog_ptr);
		return(0);
	}
	for (name_counter = 0; name[name_counter] != '\n'; name_counter++)
		;
	dog_ptr->name = malloc(name_counter + 1);
	for (owner_counter = 0; name[owner_counter] != '\n'; owner_counter++)
		;
	dog_ptr->owner = malloc(owner_counter + 1);
	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		free(dog_ptr->owner);
		free(dog_ptr->name);
		free(dog_ptr);
		return(0);
	}
	for (i = 0; i < name_counter; i++)
		dog_ptr->name[i] = name[i];
	dog_ptr->name[i] = '\0';
	dog_ptr->age = age;
	for (i = 0; i < owner_counter; i++)
		dog_ptr->owner[i] = owner[i];
	dog_ptr->owner[i] = '\0';
	return(dog_ptr);
}

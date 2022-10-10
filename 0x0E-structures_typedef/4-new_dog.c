#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if error, else dog data
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (dog->name == NULL)
return (NULL);
dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (dog->owner == NULL)
return (NULL);

dog->name = strcpy(dog->name, name);
dog->age = age;
dog->owner = strcpy(dog->owner, owner);

return (dog);
}

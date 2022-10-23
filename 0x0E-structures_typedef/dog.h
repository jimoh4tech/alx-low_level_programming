#ifndef DOG_H
#define DOG_H

/**
 * struct dog - compose data structure for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: onwer of the dog
 *
 * Description: User defined data structure that stores the data
 * about dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_type - Type definition for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores the information about dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner pf the dog
 *
 * Description: struct "dog" that stores the name and age of a dog
 * and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

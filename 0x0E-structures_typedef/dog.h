#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining new data type describing a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - defining a new type name for struct dog defined above
 */
typedef struct dog dog_t;

/*prototype of functions*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

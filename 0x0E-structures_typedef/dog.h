#ifndef DOG_HEAD
#define DOG_HEAD

/**
 * struct dog - dog
 * @name: points to dog
 * @age: points to dog age
 * @owner: points to dog onwer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - my struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: bla bla
 */

typedef struct dog dog_t;
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

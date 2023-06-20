#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure that gives information about dog
 *@name: the first member of struct
 *@age: the second member of struct
 *@owner: the third member of struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog my_dog;

typedef struct dog dog_t;
#endif


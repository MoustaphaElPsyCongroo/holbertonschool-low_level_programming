#ifndef dog_h
#define dog_h
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - A dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

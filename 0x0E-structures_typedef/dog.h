#ifndef DOGHEADER
#define DOGHEADER
/**
 * struct dog - take data of a doggo
 * @name: name of the doggo
 * @age: how old is the doggo
 * @owner: who keeps alive the doggo
 *
 * Description: take 3 data from a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* HOLBERTON_H */

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic info
 * @name:1st member
 * @age:2nd member
 * @owner:3rd member
 * Description longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t -typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char src);
init_strlen(char *s);
#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define new type named dog
 * @name: Pointer to string (name of dog)
 * @age: Number of years of the dog
 * @owner: Pointer to string (owner of the dog)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif

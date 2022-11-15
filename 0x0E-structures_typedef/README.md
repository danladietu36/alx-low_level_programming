0x0E. C - Structures, typedef.

1. Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

2. Write a function that initialize a variable of type struct dog "void init_dog(struct dog *d, char *name, float age, char *owner)"

3. Write a function that prints a struct dog
	Prototype: void print_dog(struct dog *d);
	
4. Define a new type dog_t as a new name for the type struct dog.

5. Write a function that creates a new dog.
	Prototype: dog_t *new_dog(char *name, float age, char *owner);
6. Write a function that frees dogs.
	void free_dog(dog_t *d);

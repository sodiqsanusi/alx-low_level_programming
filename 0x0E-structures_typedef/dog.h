#ifndef DOG_H
#define DOG_H

/**
* struct dog - Holds the properties for a dog
* @name: The dog's name
* @age: The dog's age
* @owner: The dog's owner name
*
* Description: This holds the details of a dog object
*/
typedef struct dog
{
	char *name;
	int age;
	char *owner;
} dog;

#endif


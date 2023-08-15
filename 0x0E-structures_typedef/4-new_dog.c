#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - A C function that returns length of string
  * @s: The string parameter to check
  *
  * Return: Returns the length of the string
  */

int _strlen(char *s)
{
	/* Declaring and initializing variable */
	int i = 0;

	/* Looping through all characters of the string */
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * *_strcpy - A C function copies string including (\0)
  * to buffer.
  *
  * @dest: The pointer parameter to the buffer
  * @src: The string parameter to be copied
  * Return: Returns the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	/* Declaring and initializing variables */
	int len = 0, i;

	/* Looping through characters to be copied */
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * new_dog - A C function that creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Return: Returns pointer to the new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Declaring and initializing variables */
	dog_t *dog;
	int len1 = _strlen(name), len2 = _strlen(owner);

	/* Allocating memory using malloc */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL) /* Checking if memory allocation was successful */
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

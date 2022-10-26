#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stddef.h>

/**
 * new_dog - starts the file
 * @name: var
 * @age: var
 * @owner: var
 *
 * Return: returns
 */

dog_t *new_dog(char *name, float age, char *owner)
{
char *newName, *newOwner;
unsigned int i, j;
dog_t *ar;
ar = malloc(sizeof(dog_t));
if (ar == NULL || name == NULL || owner == NULL || age != age)
{
free(ar);
return (NULL);
}
newName = malloc(strlen(name) + 1);
newOwner = malloc(strlen(owner) + 1);
if (newName == NULL || newOwner == NULL)
{
free(newOwner);
free(newName);
free(ar);
return (NULL);
}
for (i = 0; i < strlen(name); i++)
newName[i] = name[i];
newName[i] = '\0';
for (j = 0; j < strlen(owner); j++)
newOwner[j] = owner[j];
newOwner[j] = '\0';
ar->name = newName;
ar->age = age;
ar->owner = newOwner;
return (ar);
}

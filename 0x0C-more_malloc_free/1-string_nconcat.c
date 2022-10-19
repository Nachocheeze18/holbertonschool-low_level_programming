#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *string_nconcat - | starts the file
 * @s1: - | var
 * @s2: - | var
 * @n: - | var
 * Return: | ends the file
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int x, y;
char *mem, *c;

if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
if (n >= strlen(s2))
{
n = strlen(s2);
}
mem = malloc(strlen(s1) + n + 1);
if (mem == NULL)
{
return (NULL);
}
for (x = 0; x < strlen(s1); x++)
{
mem[x] = s1[x];
}
for (y = 0; y < n; y++)
{
mem[x + y] = s2[y];
}
mem[x + y] = '\0';
c = malloc(5);
free(c);
return (mem);
}

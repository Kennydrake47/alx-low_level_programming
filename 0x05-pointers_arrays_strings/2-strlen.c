#include "main.h"
/**
 * _strlen - return lenght of a string
 * @s: string to find length of
 * Return: lenght of string
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}

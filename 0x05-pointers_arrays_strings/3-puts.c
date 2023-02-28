#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string to the stdout
 * @str: the string
 * Return: the lenght of the string
 */
void _puts(char *str)
{
int a = 0;
while (str[a] != '\0')
{
putchar(str[a]);
a++;
}
putchar('\n');
}

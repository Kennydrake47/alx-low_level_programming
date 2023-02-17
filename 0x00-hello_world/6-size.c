#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(e));

return (0);
}

#include "main.h"
/**
 * swap_int - swaps two integers
 *
 * @a: integer
 * @b: integer
 *
 * Return 0
 */
void swap_int(int *a, int *b)
{
int y;
y = *a;
*a = *b;
*b = y;
}

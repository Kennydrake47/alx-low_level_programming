#include "main.h"
#include <stddef.h>
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: the unsigned long int number to extract the bit from
 * @index: the index of the bit to extract, starting from 0 (LSB)
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}


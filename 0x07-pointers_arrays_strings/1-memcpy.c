#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @dest: source code string
 * @src: string to fil
 * @n: lenght of buffer
 * Return: newly string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(dest + k) = *(src + k);
		k++;
	}
	return (dest);
}

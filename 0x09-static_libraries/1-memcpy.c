#include "main.h"

/**
 * _memcpy - a function that copies the memory area
 * @dest: where the memory is stored
 * @src: where the memory is being copied from
 * @n: The number of bytes present
 * Return: copied memory with n bytes nonchanging
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

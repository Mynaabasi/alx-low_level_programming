#include "main.h"
/**
 * _strncpy - It copies a string
 * @dest: Frirst input value
 * @src: second input value
 * @n: third input value
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

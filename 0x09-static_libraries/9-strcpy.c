#include "main.h"

/**
 * char *_strcpy - A function that copies the string
 * to be pointed to byte src
 * @src: To be copied from
 * @dest: To be copied to
 * Return: The string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

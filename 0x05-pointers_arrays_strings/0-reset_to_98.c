#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Write a function that takes a pointer to update its value
 * @n - an integer
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("The value of n is now %p\n", &n);
	return (0);
}

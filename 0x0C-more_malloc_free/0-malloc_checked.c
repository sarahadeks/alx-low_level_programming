#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: sizeof int
 * Return: nothing
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	void *pnter;

	pnter = malloc(b);
	
	if (pnter == NULL)
		exit(98);
	

	return (pnter);
}

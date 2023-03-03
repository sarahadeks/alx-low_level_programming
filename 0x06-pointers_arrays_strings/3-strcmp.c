#include "main.h"

/**
  * _strcmp - function that compares two strings.
  * @s1: first string
  * @s2: second string
  *
  * Return: int
  */

int _strcmp(char *s1, char *s2)
{
	int i, tes;

	i = 0;
	while (i >= 0)
	{
		tes = s1[i] - s2[i];
		if (tes != 0 || (s1[i] == '\0' && s2[i] == '\0'))
			break;
		i++;
	}
	return (tes);
}

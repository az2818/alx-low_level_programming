#include "main.h"

/**
 * _strlen- function that returns the length of a string
 * @s: points to the string
 * Return: returns length
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{}
	return (n);
}

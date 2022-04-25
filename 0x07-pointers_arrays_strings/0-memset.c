#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
=======
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
>>>>>>> 7c75f72584097fb4d12edf9840e2e511362354f3
}

#include "main.h"


/**
<<<<<<< HEAD
 *
=======
>>>>>>> 94eb91cd4b971df90a360e78082b6eb52acedc0c
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
<<<<<<< HEAD
 *
 * Return: string.
=======
 *Return: string.
>>>>>>> 94eb91cd4b971df90a360e78082b6eb52acedc0c
 */

char *_strncpy(char *dest, char *src, int n)
{
<<<<<<< HEAD
int i = 0, k = 0;

while (n > k)
{
if (src[k] == '\0')
{
for (; k < n; k++)
{
dest[i] = '\0';
i++;
}
}
else
{
dest[i] = src[k];
k++;
i++;
}
}

return (dest);
=======
	int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}

	return (dest);
>>>>>>> 94eb91cd4b971df90a360e78082b6eb52acedc0c
}

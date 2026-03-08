#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to scan
 * @accept: bytes to match
 *
 * Return: number of bytes in initial segment of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int match;

	i = 0;
	while (s[i] != '\0')
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			break;
		}
		i++;
	}

	return (i);
}

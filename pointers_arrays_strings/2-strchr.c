#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to scan
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (1)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == '\0')
		{
			return (0);
		}
		i++;
	}
}

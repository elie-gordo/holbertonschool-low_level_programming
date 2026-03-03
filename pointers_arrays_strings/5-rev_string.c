#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	i--;
	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}

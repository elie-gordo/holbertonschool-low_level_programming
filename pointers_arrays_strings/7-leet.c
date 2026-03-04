#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char values[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
				str[i] = values[j];
			j++;
		}
		i++;
	}

	return (str);
}

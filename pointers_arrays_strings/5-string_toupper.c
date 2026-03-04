#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: pointer to string
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}

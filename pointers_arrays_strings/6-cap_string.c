#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
static int is_separator(char c)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	int i;
	int capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next == 1)
			str[i] = str[i] - 32;

		if (is_separator(str[i]) == 1)
			capitalize_next = 1;
		else
			capitalize_next = 0;

		i++;
	}

	return (str);
}

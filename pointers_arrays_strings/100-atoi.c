#include <limits.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	unsigned int result, limit;
	int i, sign, digit;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	limit = (sign == -1) ? (unsigned int)INT_MAX + 1 : (unsigned int)INT_MAX;
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (result <= (limit - (unsigned int)digit) / 10)
			result = result * 10 + (unsigned int)digit;
		else
			result = limit;
		i++;
	}
	if (sign == -1)
		return (result == (unsigned int)INT_MAX + 1 ? INT_MIN : -(int)result);
	return ((int)result);
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	long int d1;
	long int d2;
	int i;

	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(i * size) + i];
		d2 += a[(i * size) + (size - 1 - i)];
	}

	printf("%ld, %ld\n", d1, d2);
}

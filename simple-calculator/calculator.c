#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int choice;
	double a;
	double b;

	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice == 1)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			printf("Result: %g\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			printf("Result: %g\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			printf("Result: %g\n", a * b);
		}
		else if (choice == 4)
		{
			printf("A: ");
			scanf("%lf", &a);
			printf("B: ");
			scanf("%lf", &b);
			if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %g\n", a / b);
		}
	}

	return (0);
}

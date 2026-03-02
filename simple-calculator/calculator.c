#include <stdio.h>

/**
 * print_menu - displays the calculator menu
 *
 * Return: nothing
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
}

/**
 * main - program entry point
 *
 * Return: 0 on success, 1 if input cannot be read
 */
int main(void)
{
	int choice;
	int read_status;

	while (1)
	{
		print_menu();
		read_status = scanf("%d", &choice);
		if (read_status != 1)
			return (1);
		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
	}

	return (0);
}

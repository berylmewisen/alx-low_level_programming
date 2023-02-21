#include <stdio.h>
#include  <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 *print_to_98 - function that prints all natural numbers from n to 98, followed
 *by a new line
 *@n: integer
 *Return: Nothing
 */
void print_to_98(int n)
{
	if (n >= 98)
	if (n > 98)
	{

		while (n > 98)
		printf("%d, ", n--);

		printf("%d\n", n);
		for (; n > 98; --n)
			printf("%d, ", n);
	}
	else
	{

		while (n < 98)
		printf("%d, ", n++)
		printf("%d\n", n);
		for (; n <= 97; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}

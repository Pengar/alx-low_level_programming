#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument number
 * @argv: array arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int p, suma = 0, res = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			find_letter = argv[p];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			res = atoi(argv[p]);
			suma += res;
		}
		printf("%d\n", suma);
	}
	else
		printf("%d\n", 0);
	return (0);
}

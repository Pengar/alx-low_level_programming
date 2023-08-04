#include <stdio.h>

/**
 * main - Entry point
 *@argc: arguments count
 *@argv: arguments vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			;
		printf("%d\n", i - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

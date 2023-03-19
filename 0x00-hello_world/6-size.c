#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)

{
fputs("Size of a char: %d byte(s)\n", sizeof(char));
fputs("size of an int: %d byte(s)\n", sizeof(int));
fputs("size of a long int: %d byte(s)\n", sizeof(long int));
fputs("size of a long long int: %d byte(s)\n", sizeof(long long int));
fputs("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}

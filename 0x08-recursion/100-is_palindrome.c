#include "main.h"
/**
*longitud - function that returns the power of a number
*@s: string
*
*Return: length of a string
*/
int longitud(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (longitud(s + 1) + l);
	}
	return (l);
}
/**
 *comparar - function that returns the power of a number
 *@i: original number
 *@l: counter to compare multiplication
 *@s: string
 *Return: square root
 */
int comparar(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (comparar(i + 1, l - 1, s));
	else
		return (0);
}
/**
 *is_palindrome - return 1 if is number prime
 *@s: number to evaluate
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int l = longitud(s);
	int i = 0;

	return (comparar(i, l - 1, s));
}

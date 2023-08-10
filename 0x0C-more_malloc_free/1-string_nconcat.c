#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates string s1 with nth of s2
  * @s1: .....
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, m = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		m = i + k;
	else
		m = i + n;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < m)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}

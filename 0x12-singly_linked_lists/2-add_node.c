#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - function that adds node at the beginning of a list_t lis
 * @head: Address of the list
 *@str: pointer to string 
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{

	struct list_s *temp = NULL;
	int k;

	temp = (struct list_s *)malloc(sizeof(struct list_s));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		;
	temp->len = k;
	temp->next = *head;
	*head = temp;
	return (temp);

}

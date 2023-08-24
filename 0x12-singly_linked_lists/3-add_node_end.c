#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: Address of first element
 *@str: pointer to string
 * Return: the address
 */
list_t *add_node_end(list_t **head, const char *str)
{

	struct list_s *new = NULL;
	struct list_s *temp = NULL;
	int k;

	new = (struct list_s *)malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		;
	new->len = k;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);

}

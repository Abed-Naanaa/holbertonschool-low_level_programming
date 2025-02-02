#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;
	char *dup_str;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	dup_str = strdup(str);
	if (!dup_str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}

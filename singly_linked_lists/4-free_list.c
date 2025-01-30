#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list to be freed
 */
void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next; /* Save the next node */
		free(current_node->str);        /* Free the string */
		free(current_node);              /* Free the current node */
		current_node = next_node;        /* Move to the next node */
	}
}

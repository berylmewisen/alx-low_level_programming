#include "lists.h"

/**
 * pop_listint - delete the head node of in a list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data from the deleted node,
 * or no data if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

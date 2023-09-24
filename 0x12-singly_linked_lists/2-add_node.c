#include "lists.h"

/**
 * len - get the length of string
 * @str: the string we work on
 *
 * Return: length of string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - add a node to the beginning of the list
 * @head: head pointer
 * @str: string to be inserted
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	new_node->str = strdup(str);
	new_node->len = len(str);
	*head = new_node;

	return (*head);
}

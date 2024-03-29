#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node - adds a new node at beginning of the list_t.
* @head: head of list_t .
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *add;
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
add->len = _strlen(str);
add->next = *head;
*head = add;
return (add);
}

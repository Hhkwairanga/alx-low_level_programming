#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of linkint_t
 * @head: the head of the linked list 
 * 
 * @n: the value to add to the new node
 * return: adress of new element or null if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_list;
    if (head != NULL)
    {
        new_list = malloc(sizeof(listint_t));
        if (new_list == NULL)
        {
            return (NULL);
        }
        new_list->n = n;
        new_list->next = *head;
        *head = new_list;

        return (new_list);
    }
    return (NULL);
}
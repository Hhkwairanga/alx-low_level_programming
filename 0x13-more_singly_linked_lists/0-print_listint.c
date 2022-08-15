#include <stdio.h>
#include "lists.h"

/**
 * print_listint: a function to print all the elements of a linked list
 * @h: the head of the link list
 * 
 * return: count or number of element in the list 
 * 
 */

size_t print_listint(const listint_t *h)

{
    int count = 0;
    
    if (h != NULL)
    {
        while (h)
        {
            printf("%d\n", h->next);
            h = h->next;
            count++;
        } 
    }
    
    return (count);
}
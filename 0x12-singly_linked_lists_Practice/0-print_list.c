#include <stdio.h>
#include "lists.h"

/** 
 * print lists_t - print all the element of the link list
 * @h: the head of the link list
 * 
 * Return; the number of nodes in the link list
 * 
 */

size_t print_list(const list_t *h)
{
    int count = 0;

    if (h != NULL)
    {
        while (h)
        {
            printf("%d\n", h->n);
            h = h-> next;
            count++;
        }
        
    }

    return (count);  
} 
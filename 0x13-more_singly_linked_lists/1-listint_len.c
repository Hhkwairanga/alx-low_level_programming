#include "lists.h"

/**
 * listint_len: a function that return the nuymber of element in a linked list.
 *  
 * @h: the pointer or head to the first element 
 * @return number of element (size_t) 
 */

size_t listint_len(const listint_t *h)
{
    int count = 0;
    
    while (h != NULL)
    {
        h = (*h).next;
        count = count + 1;
    }
    
    return (count);
}
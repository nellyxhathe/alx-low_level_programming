#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the first node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
    size_t nodenum = 0;

    /* Iterate through the linked list */
    while (h)
    {
        /* Print the value of the current node */
        printf("%d
", h->n);

        /* Increment the node count */
        nodenum++;

        /* Move to the next node */
        h = h->next;
    }

    /* Return the number of nodes */
    return (nodenum);
}


#include <stdio.h>
#include <stdlib.h>

// Steps to iterate:                ARRAY X LINKED LIST
// Array:                  i = 0          |        i < n        |         i++
// Linked list:   node *current = &root   |   current != NULL   |  current→current.next

typedef struct  node
{
    int x;
    struct node  *next;
} node;


int main(void)
{
    node root;
    root.x = 15;
    root.next = (node *)malloc(sizeof(node));
    if (root.next == NULL)
        return (-1);
    root.next->x = -2;
    root.next->next = (node *)malloc(sizeof(node));
    if (root.next->next == NULL)
        return (-1);
    (*root.next).next->x = 22;
    (*root.next).next->next = NULL;

    node    *current;

    current = &root;
    printf("Nodes: ");
    while (current != NULL)
    {
        printf("%d ", current->x);
        current = current->next;
    }
    printf("\n");
    free(root.next->next);
    free(current);
    return (0);
}
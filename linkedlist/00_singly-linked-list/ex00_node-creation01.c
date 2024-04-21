#include <stdio.h>
#include <stdlib.h>

// Node declaration
typedef struct  node
{
    int         x;
    struct node *next;
} node;

int main(void)
{
    // Initializing nodes
    node    root;

    // Assigning values and connecting nodes
    root.x = 15;
    root.next = (node *)malloc(sizeof(node));
    root.next->x = -2;
    root.next->next = NULL;
    printf("First element: %d\n", root.x);
    printf("Second element: %d\n", (*root.next).x);
    free(root.next);
    return (0);
}
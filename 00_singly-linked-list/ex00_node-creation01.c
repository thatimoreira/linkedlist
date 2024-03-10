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
    node    root, elem2;

    // Assigning values and connecting nodes
    root.x = 15;
    root.next = &elem2;
    elem2.x = -2;
    elem2.next = NULL;
    printf("First element: %d\n", root.x);
    printf("Second element: %d\n", root.next->x);
    return (0);
}
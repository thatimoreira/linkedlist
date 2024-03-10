#include <stdio.h>
#include <stdlib.h>

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
    root.next->next = NULL;

    node    *current;

    current = &root;
    printf("Nodes: ");
    while (current != NULL)
    {
        printf("%d ", current->x);
        current = current->next;
    }
    printf("\n");
    free(current);
    return (0);
}
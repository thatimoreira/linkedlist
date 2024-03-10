#include <stdio.h>
#include <stdlib.h>

typedef struct  node
{
    int x;
    struct node *next;
} node;

void    insert_end(node **root, int value)
{
    node    *new_node;

    new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL)
        exit (1);
    new_node->x = value;
    new_node->next = NULL;

    node *current;
    
    current = *root;
    while (current->next != NULL) // condição para que o conteúdo do nó atual não seja nulo
        current = current->next;
    current->next = new_node;
    // free???
}

int main(void)
{
    node    root;

    root.x = 15;
    root.next = NULL;

    node    *current;

    current = &root;
    printf("Nodes: ");
    while (current != NULL)
    {
        printf("%d ", current->x);
        current = current->next;
    }
    printf("\n");
    free(root.next);
    return (0);
}
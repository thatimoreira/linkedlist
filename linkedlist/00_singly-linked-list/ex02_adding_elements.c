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
    while (current->next != NULL)
        current = current->next;
    current->next = new_node;
}

int main(void)
{
    node    *root;

    root = (node *)malloc(sizeof(node));
    if (root == NULL)
        exit (1);
    root->x = 15;
    root->next = NULL;

    insert_end(&root, -2);
    insert_end(&root, -11);

    node    *current;

    current = root;
    printf("Nodes: ");
    while (current != NULL)
    {
        printf("%d ", current->x);
        current = current->next;
    }
    printf("\n");
    return (0);
}
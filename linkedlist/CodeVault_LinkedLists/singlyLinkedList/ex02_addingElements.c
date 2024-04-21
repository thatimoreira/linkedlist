/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02_addingElements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:06:41 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 15:44:09 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** To add an element to the end of a singly linked list, follow these two steps:
**
** 1) Traverse the list to reach the last node;
** 2) Update the 'next' pointer of the last node to point to the newly created node.
**
** Parameters:
** >> head: A pointer to the pointer to the head of the linked list
**	    This allows the function to modify the head pointer if necessary;
** >> data: The data value to be stored in the new node.
*/
#include "singly_linked_list.h"

void	insert_end(t_node **head, int data)
{
	t_node	*new_node;
	t_node	*current;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		exit(ALLOCATION_FAILURE);
	new_node->next = NULL;
	new_node->x = data;
//	printf("%d\n", new_node->x);
	current = *head;
	while (current->next != NULL) // condition to traverse till the last node
		current = current->next; // 
	current->next = new_node; // adds new_node to the end of the list
//	printf("%p\n", current->next);
}

int	main(int argc, char **argv)
{
	int	i;
	t_node	*head;
	t_node	*current;

	i = 1;
	if (argc > 1)
	{
		head = (t_node *)malloc(sizeof(t_node));
		if (!head)
			return (ALLOCATION_FAILURE);
		head->x = atoi(argv[i++]);
		head->next = NULL;
		while (i < argc)
			insert_end(&head, atoi(argv[i++]));
		current = head;
		while (current != NULL)
		{
			printf("%d\n", current->x);
			current = current->next;
		}
	}
	else
		printf("Please, inform your list values.\n");
	return (0);
}

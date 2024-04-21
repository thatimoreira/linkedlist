/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_iteratingOverLinkedList.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:52:53 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 12:56:20 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** To iterate over a singly linked list you have to follow three steps:
**
** 1) Initialize a pointer to the first node, typically named 'current';
** 2) Use a loop condition 'current != NULL' to traverse the list until the end
**    is reached. This ensure that you process each node in the list; 
** 3) Inside the loop, access the data or perform operations on the current node,
**    and then update 'current' to point to the next node in the list by assigning
**    'current->next' to 'current' node. This allow you to move through the list
**    and process each node sequentially.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int		x;
	struct s_node	*next;
}			t_node;


int	main(int argc, char **argv)
{
	t_node	head;
	t_node	*current;

	if (argc > 1)
	{
		head.x = atoi(argv[1]);
		head.next = (t_node *)malloc(sizeof(t_node));
		if (!head.next)
			return (-1);
		head.next->x = atoi(argv[2]);
		head.next->next = (t_node *)malloc(sizeof(t_node));
		if (!head.next->next)
			return (-1);
		head.next->next->x = 22;
		head.next->next->next = NULL;
		// Iterating over the list
		current = &head;
		while (current != NULL)
		{
			printf("%d\n", current->x);
			current = current->next;
		}
		free (head.next->next);
		free (head.next);
	}
	else
		printf("Please, inform values to create your linked list.\n");
	return (0);
}

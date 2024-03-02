/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_creation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:37:37 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/02 20:00:41 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct node  // Declares the struct node
{
	int		data;
	struct node	*next;
};

int	main(void)
{
	struct node	*prev; // node creation
	struct node	*head;
	struct node	*p;
	int		n;
	int		i;

	printf("Number of elements");
	scanf("%d", &n);
	head = NULL;
	for(i = 0; i < n; i++)
	{
		p = (struct node *)malloc(sizeof(struct node)); // allocates memory for node p
		scanf("%d", p->data); // the user input is being attributed to the data of p
		p->next = NULL; // attributes NULL as the value of node p
		if (head == NULL) // if the linked list wasn't created
			head = p; // makes the 1st node of the linked list and gives the value p to it
		else
			prev->next=p; // connects the previous node to node p (current node)
		prev = p; // makes the last node
	}
	return (0);
}

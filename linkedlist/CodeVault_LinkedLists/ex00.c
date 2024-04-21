/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 09:38:48 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 09:54:30 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_node	elem2;

	head.x = 0;
	head.next = NULL;
	elem2.x = 0;
	elem2.next = NULL;
	if (argc > 1)
	{
		// Assigning values to nodes
		head.x = atoi(argv[1]);
		head.next = &elem2;
		elem2.x = atoi(argv[2]);
		elem2.next = NULL;
		// Printing nodes
		printf("First node: %d\n", head.x);
		//printf("Second node: %d\n", elem2.x);
		printf("Second node: %d\n", head.next->x);
		//printf("Second node: %d\n", (*head.next).x);
	}
	else
		printf("Please, inform node values\n");
	return (0);
}

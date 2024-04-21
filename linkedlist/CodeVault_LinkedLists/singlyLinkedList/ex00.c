/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 09:38:48 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 10:27:13 by tsoares-         ###   ########.fr       */
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

	if (argc > 1)
	{
		head.x = atoi(argv[1]);
		head.next = (t_node *)malloc(sizeof(t_node));
		if (!head.next)
			return (-1);
		head.next->x = atoi(argv[2]);
		head.next->next = NULL;
		// Printing nodes
		printf("First node: %d\n", head.x);
		//printf("Second node: %d\n", elem2.x);
		printf("Second node: %d\n", head.next->x);
		//printf("Second node: %d\n", (*head.next).x);
		free (head.next);
	}
	else
		printf("Please, inform node values\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_creation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:37:37 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/02 19:19:12 by tsoares-         ###   ########.fr       */
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

	p = (struct node *)malloc(sizeof(struct node)); // allocates memory for node p
	scanf("%d", p->data); // the user inputs is being attributed to the data of p
	p->next = NULL;
	return (0);
}

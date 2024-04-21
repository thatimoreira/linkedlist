/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01_iteratingOverLinkedList.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 10:52:53 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 11:20:51 by tsoares-         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
	}
	else
		printf("Please, inform values toi create your linked list.");
	return (0);
}

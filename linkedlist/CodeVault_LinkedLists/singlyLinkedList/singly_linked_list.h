/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:19:58 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 13:48:02 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLY_LINKED_LIST
# define SINGLY_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

#define ALLOCATION_FAILURE -1

typedef struct	s_node
{
	int		x;
	struct s_node	*next;
}			t_node;

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:19:58 by tsoares-          #+#    #+#             */
/*   Updated: 2024/04/21 13:21:25 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLY_LINKED_LIST
# define SINGLY_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	int		x;
	struct s_node	*next;
}			t_node;

#endif

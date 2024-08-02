/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_com.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:01:54 by otboumeh          #+#    #+#             */
/*   Updated: 2024/08/02 09:52:02 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	push(t_stack_node **dest, t_stack_node **src)
{
	t_stack_node	*node_to_push;	

	if (*src == NULL)
		return ;
	node_to_push = *src;
	*src = (*src)->next_node;
	if (*src)
		(*src)->prev_node = NULL;
	node_to_push->prev_node = NULL;
	if (*dest == NULL)
	{
		*dest = node_to_push;
		node_to_push->next_node = NULL;
	}
	else
	{
		node_to_push->next_node = *dest;
		node_to_push->next_node->prev_node = node_to_push;
		*dest = node_to_push;
	}
}

void	pa(t_stack_node **a, t_stack_node **b, bool checker)
{
	push(b, a);
	if (!checker)
		write(1, "pa\n", 3);
}

void	pb(t_stack_node **b, t_stack_node **a, bool checker)
{
	push(a, b);
	if (!checker)
		write(1, "pb\n", 3);
}

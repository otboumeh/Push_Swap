/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_com.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:56:30 by otboumeh          #+#    #+#             */
/*   Updated: 2024/08/02 10:05:15 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*last;
	int				len;

	len = stack_len(*stack);
	if (NULL == *stack || NULL == stack || 1 == len)
		return ;
	last = find_last_node(*stack);
	last->prev_node->next_node = NULL;
	last->next_node = *stack;
	last->prev_node = NULL;
	*stack = last;
	last->next_node->prev_node = last;
}

void	rra(t_stack_node **a, bool checker)
{
	reverse_rotate(a);
	if (!checker)
		write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b, bool checker)
{
	reverse_rotate(b);
	if (!checker)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b, bool checker)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (!checker)
		write(1, "rrr\n", 4);
}

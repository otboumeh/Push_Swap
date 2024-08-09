/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tinny_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:33:17 by otboumeh          #+#    #+#             */
/*   Updated: 2024/08/09 12:08:03 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_stack_node	*find_highest_node(t_stack_node *stack)
{
	int				highest;
	t_stack_node	*highest_node;

	if (stack == NULL)
		return (NULL);
	highest = INT_MIN;
	while (stack)
	{
		if (stack->value > highest)
		{
			highest = stack->value;
			highest_node = stack;
		}
		stack = stack->next_node;
	}
	return (highest_node);
}

void	tiny_sort(t_stack_node **a)
{
	t_stack_node	*highest_node;

	highest_node = find_highest_node(*a);
	if (*a == highest_node)
		ra(a, false);
	else if ((*a)->next_node == highest_node)
		rra(a, false);
	if ((*a)->value > (*a)->next_node->value)
		sa(a, false);
}

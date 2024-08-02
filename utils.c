/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:22:55 by otboumeh          #+#    #+#             */
/*   Updated: 2024/08/02 13:13:05 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_last_node(t_stack_node *top)
{
	if (top == NULL)
		return (NULL);
	while (top->next_node)
		top = top->next_node;
	return (top);
}

void	append_node(t_stack_node **stack, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (NULL == stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (NULL == node)
		return ;
	node->next_node = NULL;
	node->value = nbr;
	if (NULL == *stack)
	{
		*stack = node;
		node->prev_node = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next_node = node;
		node->prev_node = last_node;
	}
}

int	stack_len(t_stack_node *stack)
{
	int	count;

	if (NULL == stack)
		return (0);
	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next_node;
	}
	return (count);
}

bool	sorted_stack(t_stack_node *stack)
{
	if (stack == NULL)
		return (1);
	while (stack->next_node)
	{
		if (stack->value > stack->next_node->value)
		{
			return (false);
		}
		stack = stack->next_node;
	}
	return (true);
}

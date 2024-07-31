/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_com.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:55:25 by otboumeh          #+#    #+#             */
/*   Updated: 2024/07/31 13:01:39 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_stack_node **stack)
{
	t_stack_node	*last_node;
	int				len;

	len = stack_len(*stack);
	if (*stack == NULL || stack == NULL || len == 1)
		return;
	last_node = find_last_node(*stack);
	last_node->next_node = *stack;
	*stack = (*stack)->next_node;
	(*stack)->prev_node = NULL;
	last_node->next_node->prev_node = last_node;
	last_node->next_node->next_node = NULL;
}

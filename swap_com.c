/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_com.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:17:32 by otboumeh          #+#    #+#             */
/*   Updated: 2024/07/31 12:54:45 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack_node **top)
{
	int len;
	len = stack_len(*top);
	if (*top == NULL || top == NULL || len == 1)
		return;
	*top = (*top)->next_node;
	(*top)->prev_node->prev_node = *top;
	(*top)->prev_node->next_node = (*top)->next_node;
	if ((*top)->next_node)
		(*top)->next_node->prev_node = (*top)->prev_node;
	(*top)->next_node = (*top)->prev_node;
	(*top)->prev_node = NULL;
}

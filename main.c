/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:27:02 by otboumeh          #+#    #+#             */
/*   Updated: 2024/08/09 12:08:17 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Swap :
//	sa : swap 'a' ---> swap the first 2 top element in the stack 'a' .
//	sb : swap 'b' ---> swap the first 2 top element in the stack 'b' .
//  ss : sa + sb .

// Rotate : 
//  ra : send the first element of 'a' to the last position .
//  rb : send the first element of 'b' to the last position .
//  rr: ra + rb.

// Reverse rotate :
// rra : send the last element of 'a' to the first position .
// rrb : send the last element of 'b' to the first position .
// rrr : rra + rrb.

// Push :
// pa : push the first element of 'b' to the first positin of 'a' .
// pb : push the first element of 'a' to the first positin of 'b' .

//The algrorythm
// if we have 3 nodes in the stack a we do the algo 
// if we have 4 nodes we push one from a to b 
// if we have more we push at the begenning 2 and then we do our algo
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || argc == 2 && !argv[1][0])
		return (1);
	else if (argc == 2)
		ft_split(argv[1], ' ');
	stack_init(&a, argv + 1, argc == 2);
	if (!sorted_stack)
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			tiny_sort(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(&a);
}

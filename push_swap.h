/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:27:18 by otboumeh          #+#    #+#             */
/*   Updated: 2024/07/28 15:27:26 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int					value;
	struct s_stack_node	*target_node;
	struct s_stack_node *next_node;
	struct s_stack_node	*prev_node;

}				t_stack_node;

// split.c
char	**ft_split(char *str, char separator);

#endif
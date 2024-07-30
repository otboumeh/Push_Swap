/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:27:18 by otboumeh          #+#    #+#             */
/*   Updated: 2024/07/30 13:40:31 by otboumeh         ###   ########.fr       */
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

// stack_init.c
void	stack_init(t_stack_node **a, char **argv, bool check);

// Error.c
int		error_repetition(t_stack_node *a, int nbr);
void	error_free(t_stack_node **a, char **argv, bool flag_argc_2);
int		error_syntax(char *str_nbr);
void	free_stack(t_stack_node **stack);
void	free_matrix(char **argv);

// utils.c
t_stack_node	*find_last_node(t_stack_node *top);
void	append_node(t_stack_node **stack, int nbr);

#endif
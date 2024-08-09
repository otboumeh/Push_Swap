/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:27:18 by otboumeh          #+#    #+#             */
/*   Updated: 2024/08/09 13:17:25 by otboumeh         ###   ########.fr       */
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
	int					current_position;
	int					push_price;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next_node;
	struct s_stack_node	*prev_node;

}				t_stack_node;

// split.c
char				**ft_split(char *str, char separator);

// stack_init.c
void				stack_init(t_stack_node **a, char **argv, bool check);

// Error.c
int					error_repetition(t_stack_node *a, int nbr);
void				error_free(t_stack_node **a, char **argv, bool flag_argc_2);
int					error_syntax(char *str_nbr);
void				free_stack(t_stack_node **stack);
void				free_matrix(char **argv);

// utils.c
void				append_node(t_stack_node **stack, int nbr);
int					stack_len(t_stack_node *stack);
t_stack_node		*find_last_node(t_stack_node *top);
bool				sorted_stack(t_stack_node *stack);

// push_com.c
void				pa(t_stack_node **a, t_stack_node **b, bool checker);
void				pb(t_stack_node **b, t_stack_node **a, bool checker);

//swap_com.c
void				sa(t_stack_node **a, bool checker);
void				sb(t_stack_node **b, bool checker);
void				ss(t_stack_node **a, t_stack_node **b, bool checker);

//rotate_com.c
void				ra(t_stack_node **a, bool checker);
void				rb(t_stack_node **b, bool checker);
void				rr(t_stack_node **a, t_stack_node **b, bool checker);

//reverse_rotate_com.c
void				rra(t_stack_node **a, bool checker);
void				rrb(t_stack_node **b, bool checker);
void				rrr(t_stack_node **a, t_stack_node **b, bool checker);

//tiny_sort.c
void				tiny_sort(t_stack_node **a);

//push_swap_i.c
void				set_current_position(t_stack_node *stack);
void				set_price(t_stack_node *a, t_stack_node *b);
void				set_cheapest(t_stack_node *b);
void				init_nodes(t_stack_node *a, t_stack_node *b);

//push_swap.c
void	finish_rotation(t_stack_node **stack, t_stack_node *top_node, char stack_name);
void	push_swap(t_stack_node **a, t_stack_node **b);

#endif
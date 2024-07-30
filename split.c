/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 12:29:48 by otboumeh          #+#    #+#             */
/*   Updated: 2024/07/30 13:41:43 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *str, char separator)
{
	int		nbr;
	int		i;
	bool	inside;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		inside = false;
		while (str[i] == separator && str[i])
			i++;
		while (str[i] && str[i] != separator)
		{
			if (!inside)
			{
				inside = true;
				nbr++;
			}
			i++;
		}
	}
	return (nbr);
}

static char	*search_next_word(char *str, char separator)
{
	static int	cursor = 0;
	char		*next_str;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == separator)
		cursor++;
	while ((str[cursor + len] != separator) && str[cursor + len])
		len++;
	next_str = malloc(sizeof(char) * ((size_t)len + 1));
	if (!next_str)
		return (NULL);
	while ((str[cursor] != separator) && str[cursor])
		next_str[i++] = str[cursor++];
	next_str[i] = '\0';
	return (next_str);
}

char	**ft_split(char *str, char separator)
{
	int		words_number;
	char	**vector_strings;
	int		i;

	i = 0;
	words_number = count_words(str, separator);
	if (!words_number)
		exit(1);
	vector_strings = malloc(sizeof(char *) * (size_t)(words_number + 2));
	if (NULL == vector_strings)
		return (NULL);
	while (words_number-- >= 0)
	{
		if (0 == i)
		{
			vector_strings[i] = malloc(sizeof(char));
			if (NULL == vector_strings[i])
				return (NULL);
			vector_strings[i++][0] = '\0';
		}
		vector_strings[i++] = search_next_word(str, separator);
	}
	vector_strings[i] = NULL;
	return (vector_strings);
}

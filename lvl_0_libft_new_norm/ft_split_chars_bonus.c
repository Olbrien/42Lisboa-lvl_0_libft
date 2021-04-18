/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_chars_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:54:34 by tisantos          #+#    #+#             */
/*   Updated: 2021/04/19 00:19:31 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clear_splitted(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_nb_strs(char const *s, const char *delimiters)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && ft_strchr(delimiters, s[i]))
		i++;
	while (s[i])
	{
		if (ft_strchr(delimiters, s[i]))
		{
			nb_strs++;
			while (s[i] && ft_strchr(delimiters, s[i]))
				i++;
			continue ;
		}
		i++;
	}
	if (!ft_strchr(delimiters, s[i - 1]))
		nb_strs++;
	return (nb_strs);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len,
					const char *delimiters)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && ft_strchr(delimiters, **next_str))
		(*next_str)++;
	while ((*next_str)[i])
	{
		if (ft_strchr(delimiters, (*next_str)[i]))
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split_chars(char const *s, const char *delimiters)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	nb_strs = ft_get_nb_strs(s, delimiters);
	tab = malloc(sizeof(char *) * (nb_strs + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, delimiters);
		tab[i] = malloc(sizeof(char) * (next_str_len + 1));
		if (tab[i] == NULL)
			return (ft_clear_splitted(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 09:05:46 by tisantos          #+#    #+#             */
/*   Updated: 2021/02/15 12:07:33 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_length(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s++ == c)
			continue ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	char	**sav_strs;
	char	*sav_s;

	if (!s)
		return (0);
	if (!(strs = malloc((get_length(s, c) + 1) * sizeof(char *))))
		return (0);
	sav_strs = strs;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		sav_s = (char *)s;
		while (*s && *s != c)
			s++;
		if (!(*strs = malloc((s - sav_s + 1) * sizeof(char))))
			return (0);
		ft_strlcpy(*strs++, sav_s, s - sav_s + 1);
	}
	*strs = 0;
	return (sav_strs);
}

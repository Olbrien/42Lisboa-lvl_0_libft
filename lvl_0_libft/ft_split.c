/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:59:52 by marvin            #+#    #+#             */
/*   Updated: 2020/12/17 17:13:51 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**freearray(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static int		startcopyingfromhere(char const *s, char c, int start)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (start == 0)
		return (0);
	while (s[i] != '\0' && count != start)
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0' && i != 0)
			count++;
		i++;
	}
	return (i);
}

static char		*ignorechar(char const *s, char c, int ignore)
{
	int		startlocation;
	int		i;
	char	*here;
	int		v;

	if (!(here = malloc(ft_strlen(s) * sizeof(char))))
		return (NULL);
	v = 0;
	startlocation = startcopyingfromhere(s, c, ignore);
	i = startlocation;
	if (startlocation == 0 && s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
	{
		i++;
		while (s[i] != '\0' && s[i] != c)
			here[v++] = s[i++];
	}
	else
	{
		while (s[i] != '\0' && s[i] != c)
			here[v++] = s[i++];
	}
	here[v] = '\0';
	return (here);
}

static int		arraysize(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0' && i != 0)
			count++;
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	char	*temp;
	int		i;
	int		b;

	temp = (char *)s;
	i = 0;
	b = 0;
	if (!s)
		return (NULL);
	if (!(array = (char **)malloc((arraysize(s, c) + 2) * sizeof(char *))))
		return (NULL);
	while (i < arraysize(s, c) + 1)
	{
		temp = ignorechar(s, c, i++);
		if (temp == NULL)
			return (freearray(array));
		if (temp[0] == '\0')
			continue;
		array[b++] = temp;
	}
	array[b] = NULL;
	return (array);
}

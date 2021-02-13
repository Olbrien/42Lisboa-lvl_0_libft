/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 04:21:06 by marvin            #+#    #+#             */
/*   Updated: 2021/02/09 04:40:02 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*here;

	i = 0;
	if (!s || !f)
		return (NULL);
	here = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (here == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		here[i] = f(i, s[i]);
		i++;
	}
	here[i] = '\0';
	return (here);
}

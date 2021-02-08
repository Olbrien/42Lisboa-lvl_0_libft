/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removechar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 04:22:25 by marvin            #+#    #+#             */
/*   Updated: 2020/12/17 00:09:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_removechar(char const *s1, char set)
{
	char *str;
	int i;
	int b;

	i = 0;
	b = 0;
	if(!(str = malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] != set)
		{
			str[b] = s1[i];
			b++;
		}
		i++;
	}
	str[b] = '\0';
	return (str);
}

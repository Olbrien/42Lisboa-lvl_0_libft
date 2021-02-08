/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:44:50 by marvin            #+#    #+#             */
/*   Updated: 2020/12/07 21:54:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *string;
	int len;
	int i;
	int b;

	i = 0;
	b = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s2)
		return ((char *)s1);
	if (!(string = malloc(len + 1 * sizeof(string))))
		return (NULL);
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[b] != '\0')
	{
		string[i] = s2[b];
		b++;
		i++;
	}
	string[i] = '\0';
	return (string);
}

int		main()
{
	char *str1 = "tiago";
	char *str2 = "santos";
	char *str3;

	printf("%s\n%s\n", str1, str2);

	str3 = ft_strjoin(str1, str2);

	printf("%s", str3);
	return (0);
}

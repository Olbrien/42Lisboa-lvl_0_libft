/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:05:55 by marvin            #+#    #+#             */
/*   Updated: 2020/12/07 20:43:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *string;
	unsigned int i;
	unsigned int a;

	i = start;
	a = 0;
	if (start > ft_strlen(s))
	{
		if(!(string = malloc(1 * sizeof(char))))
			return (NULL);
		string[0] = '\0';
		return (string);
	}
	if(!(string = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < ft_strlen(s) && len > 0)
	{
		string[a] = s[i];
		a++;
		i++;
		len--;
	}
	string[a] = '\0';
	return (string);
}

int		main()
{
	char str[] = "Esta eh a string que vou passar.";
	char *asd;
	int start = 2;
	int length = 5;

	printf("%s\n", str);
	asd = ft_substr(str, start, length);
	printf("%s\n", asd);

	return (0);
}


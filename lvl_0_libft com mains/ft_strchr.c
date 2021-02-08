/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:14:08 by marvin            #+#    #+#             */
/*   Updated: 2020/12/03 21:21:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int i;
	char *new_str;

	i = 0;
	new_str = (char *)str;
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
		printf("\n  -->  %s", new_str);
		new_str++;
	}
	printf("\n  -->  %s", new_str);
	return (new_str);
}

int		main()
{
	char a[] = "Ola, quem fala?";
	char b = 'u';

	char c[] = "Ola, quem fala?";
	char d = 'u';

	printf("%s\n", strchr(a, b));

	printf("\n%s\n", ft_strchr(c, d));

	return (0);
}

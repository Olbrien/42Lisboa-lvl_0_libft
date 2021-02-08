/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:22:19 by marvin            #+#    #+#             */
/*   Updated: 2020/12/03 22:11:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int i;
	int charfound;
	int false;
	char *new_str;

	i = 0;
	charfound = 1;
	false = 0;
	new_str = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			charfound = i;
			false = 1;
		}
		i++;
	}
	if (charfound == 0 && false == 0)
		return (NULL);
	else
		return (new_str + charfound);
}

int		main()
{
	char a[] = "Olua, quem faula?";
	char b = 'u';

	char c[] = "Olua, quem faula?";
	char d = 'u';

	printf("%s\n", strrchr(a, b));

	printf("\n%s\n", ft_strrchr(c, d));

	return (0);
}

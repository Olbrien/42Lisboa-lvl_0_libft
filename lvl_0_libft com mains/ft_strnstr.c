/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:17:13 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 07:37:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t a;
	size_t b;

	a = 0;
	if (!*little)
		return ((char *)big);
	while (big[a] != '\0' && a < len)
	{
		b = 0;
		while (big[a + b] != '\0' && big[a + b] == little[b] && \
			(a + b) < len && little[b] != '\0')
		{
			if (little[b + 1] == '\0')
				return ((char *)&(big[a]));
			b++;
		}
		a++;
	}
	return (0);
}

int		main()
{
	char big[] = "Ola, quem mesmo fala? Não seai. Quem não mesmo sei. Não sei mesmo.";
	char little[] = "O";

	char c[] = "Ola, quem mesmo fala? Não seai. Quem não mesmo sei. Não sei mesmo.";
	char d[] = "O";

	printf("\n%s", strnstr(big, little, 1));
	printf("\n%s\n", ft_strnstr(c, d, 1));

	printf("\n%s", strnstr(big, little, -100));
	printf("\n%s\n", ft_strnstr(c, d, -100));

	printf("\n%s", strnstr(big, little, 0));
	printf("\n%s\n", ft_strnstr(c, d, 0));

	printf("\n%s", strnstr(big, little, -2));
	printf("\n%s\n", ft_strnstr(c, d, -2));

	printf("\n%s", strnstr(big, little, 10));
	printf("\n%s\n", ft_strnstr(c, d, 10));

	printf("\n%s", strnstr(big, little, 11));
	printf("\n%s\n", ft_strnstr(c, d, 11));

	printf("\n%s", strnstr(big, little, 12));
	printf("\n%s\n", ft_strnstr(c, d, 12));

	printf("\n%s", strnstr(big, little, 13));
	printf("\n%s\n", ft_strnstr(c, d, 13));

	printf("\n%s", strnstr(big, little, 14));
	printf("\n%s\n", ft_strnstr(c, d, 14));

	printf("\n%s", strnstr(big, little, 15));
	printf("\n%s\n", ft_strnstr(c, d, 15));

	printf("\n%s", strnstr(big, little, 100));
	printf("\n%s\n", ft_strnstr(c, d, 100));

	return (0);
}

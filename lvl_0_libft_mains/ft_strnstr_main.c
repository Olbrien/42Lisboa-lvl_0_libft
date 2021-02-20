/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:17:13 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:03:39 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:19:11 by marvin            #+#    #+#             */
/*   Updated: 2020/12/03 04:33:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	lenght;
	size_t	i;

	lenght = 0;
	i = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (dstsize == 0)
	{
		return (lenght);
	}
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lenght);
}

int		main()
{
	char a[] = "Ola, quem fala?";
	char b[] = "Sou eu.";

	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("%ld\n", strlcpy(b, a, -55));
	printf("%s\n", b);

	printf("\n%ld\n", ft_strlcpy(d, c, -55));
	printf("%s\n", d);

	return (0);
}

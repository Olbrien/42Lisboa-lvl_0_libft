/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:05:11 by marvin            #+#    #+#             */
/*   Updated: 2020/12/03 20:13:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size < dst_size)
		return (src_size + size);

	while (src[i] != '\0' && dst_size < (size - 1))
	{
		dst[dst_size] = src[i];
		i++;
		dst_size++;
	}
	dst[dst_size] = '\0';

	return (src_size + ft_strlen(dst) - i);
}

int		main()
{
	char a[] = "Ola, quem fala?";
	char b[] = "Sou eu.";

	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("%ld\n", strlcat(b, a, 13));
	printf("%s\n", b);

	printf("\n%ld\n", ft_strlcat(d, c, 13));
	printf("%s\n", d);

	return (0);
}

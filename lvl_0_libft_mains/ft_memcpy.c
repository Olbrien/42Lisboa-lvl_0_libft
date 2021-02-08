/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:21:21 by marvin            #+#    #+#             */
/*   Updated: 2020/12/05 20:09:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest_ptr;
	const char *src_ptr;
	int i;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (n > 0)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
		n--;
	}
	return (dest);
}

int		main()
{
	char dest1[] = "Roberto Leal esta vivo no nosso espirito.";
	char src[] = "Não sei se ele ainda canta.";
	char dest2[] = "Roberto Leal esta vivo no nosso espirito.";

	printf("\n%s \n", dest1);
	memcpy(dest1, src, 200);
	printf("%s\n", dest1);

	printf("\n%s \n", dest2);
	ft_memcpy(dest2, src, 200);
	printf("%s\n", dest2);
}

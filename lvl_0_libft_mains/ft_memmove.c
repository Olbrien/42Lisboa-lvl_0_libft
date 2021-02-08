/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 23:40:57 by marvin            #+#    #+#             */
/*   Updated: 2020/12/06 00:34:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
	{
		while (n--)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}

int		main()
{
	char dest1[] = "Infelizmente faleceu.";
	char src[] = "Não sei se ele ainda canta.";

	//printf("\n%s \n", dest1);
	//ft_memmove(dest1, src, 35);
	//printf("%s\n", dest1);

	printf("\n%s \n", dest1);
	ft_memmove(dest1, src, 20);
	printf("%s\n", dest1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 22:24:26 by marvin            #+#    #+#             */
/*   Updated: 2021/02/09 04:04:34 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	int			i;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (n > 0)
	{
		dest_ptr[i] = src_ptr[i];
		if ((unsigned char)src_ptr[i] == (unsigned char)c)
			return (dest + i + 1);
		n--;
		i++;
	}
	return (NULL);
}

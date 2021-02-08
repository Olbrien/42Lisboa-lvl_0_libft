/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 22:24:26 by marvin            #+#    #+#             */
/*   Updated: 2020/12/05 23:29:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if ((unsigned char)src_ptr[i] == (unsigned char)c)
			return(dest + i + 1);
		n--;
		i++;
	}
	return (NULL);
}

int		main()
{
	char dest1[] = "Ro.";
	char src[] = "Não sei se ele ainda canta.";
	char letter = 'o';

	//printf("\n%s \n", dest1);
	//memccpy(dest1, src, letter, 55);
	//printf("%s\n", dest1);

	printf("\n%s \n", dest1);
	ft_memccpy(dest1, src, letter, 4);
	printf("%s\n", dest1);
}


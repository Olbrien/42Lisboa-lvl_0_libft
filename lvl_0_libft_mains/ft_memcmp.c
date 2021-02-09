/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 02:47:44 by marvin            #+#    #+#             */
/*   Updated: 2020/12/06 03:16:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *str1_ptr;
	const unsigned char *str2_ptr;
	int i;

	str1_ptr = (unsigned char *)str1;
	str2_ptr = (unsigned char *)str2;
	i = 0;
	while (n > 0)
	{
		if (str1_ptr[i] != str2_ptr[i])
			return (str1_ptr[i] - str2_ptr[i]);
		i++;
		n--;
	}
	return (0);
}

int		main()
{
   char str1[] = "acz";
   char str2[] = "";

   printf("%d \n", memcmp(str1, str2, 123));
   printf("%d", ft_memcmp(str1, str2, 123));

   return (0);
}

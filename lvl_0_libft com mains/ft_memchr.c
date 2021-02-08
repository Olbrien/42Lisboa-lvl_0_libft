/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 02:05:41 by marvin            #+#    #+#             */
/*   Updated: 2020/12/06 02:44:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *str_ptr;
	int i;

	str_ptr = (unsigned char *)str;
	i = 0;
	while(str_ptr[i] != '\0' && n > 0)
	{
		if (str_ptr[i] == (unsigned char) c)
			return (str_ptr + i);
		i++;
		n--;
	}
	return (NULL);
}

int main ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '/';
   char *ret;

   ret = ft_memchr(str, ch, 6);
   printf("%s \n", ret);
   printf("%s", str);

   return(0);
}

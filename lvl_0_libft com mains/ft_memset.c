/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:24:27 by marvin            #+#    #+#             */
/*   Updated: 2020/12/05 19:16:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)str;
	while (n > 0)
	{
		*ptr++ = c;
		n--;
	}
	return (str);
}

int		main()
{
	char a[] = "Esta frase não tem nada cá dentro.";
	char b[] = "Esta frase não tem nada cá dentro.";
	char c = '7';

	printf("\n%s \n", a);
	memset(a, c, 2);
	printf("%s\n", a);

	printf("\n%s \n", b);
	ft_memset(b, c, 2);
	printf("%s\n", b);
}

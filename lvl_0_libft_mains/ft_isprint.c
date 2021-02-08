/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:49:13 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 22:53:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

int		main()
{
	char a = 'A';
	char b = 0x80;
	char c = 'Z';
	char d = ' ';

	printf("%d \n", ft_isprint(a));
	printf("%d \n", ft_isprint(b));
	printf("%d \n", ft_isprint(c));
	printf("%d \n", ft_isprint(d));

	return (0);
}

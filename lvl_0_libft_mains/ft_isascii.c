/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:31:49 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 22:46:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int		main()
{
	char a = 'A';
	char b = 0x80;
	char c = 'Z';

	printf("%d \n", ft_isascii(a));
	printf("%d \n", ft_isascii(b));
	printf("%d \n", ft_isascii(c));

	return (0);
}

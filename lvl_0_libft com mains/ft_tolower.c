/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:05:56 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 23:06:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return(c + 32);
	return (c);
}

int		main()
{
	char a = 'A';
	char b = 0x80;
	char c = 'Z';
	char d = ' ';
	char e = 'a';
	char f = 'z';
	char g = 'G';

	printf("%c \n", ft_tolower(a));
	printf("%c \n", ft_tolower(b));
	printf("%c \n", ft_tolower(c));
	printf("%c \n", ft_tolower(d));
	printf("%c \n", ft_tolower(e));
	printf("%c \n", ft_tolower(f));
	printf("%c \n", ft_tolower(g));

	return (0);
}

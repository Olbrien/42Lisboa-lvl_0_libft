/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:55:27 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 23:02:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return(c - 32);
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

	printf("%c \n", ft_toupper(a));
	printf("%c \n", ft_toupper(b));
	printf("%c \n", ft_toupper(c));
	printf("%c \n", ft_toupper(d));
	printf("%c \n", ft_toupper(e));
	printf("%c \n", ft_toupper(f));
	printf("%c \n", ft_toupper(g));

	return (0);
}

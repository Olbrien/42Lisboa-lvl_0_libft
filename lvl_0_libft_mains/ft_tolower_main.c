/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:05:56 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:04:30 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

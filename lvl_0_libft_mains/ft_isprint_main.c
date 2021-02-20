/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:49:13 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:57:45 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

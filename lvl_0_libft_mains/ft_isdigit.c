/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:33:55 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 18:35:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		main()
{
	printf("%d \n", isdigit('c'));
	printf("%d \n", ft_isdigit('c'));

	printf("\n%d \n", isdigit('D'));
	printf("%d \n", ft_isdigit('D'));

	printf("\n%d \n", isdigit('A'));
	printf("%d \n", ft_isdigit('A'));

	printf("\n%d \n", isdigit('Z'));
	printf("%d \n", ft_isdigit('Z'));

	printf("\n%d \n", isdigit('2'));
	printf("%d \n", ft_isdigit('2'));

	printf("\n%d \n", isdigit('8'));
	printf("%d \n", ft_isdigit('8'));

	printf("\n%d \n", isdigit('0'));
	printf("%d \n", ft_isdigit('0'));

	printf("\n%d \n", isdigit(' '));
	printf("%d \n", ft_isdigit(' '));

	return(0);
}

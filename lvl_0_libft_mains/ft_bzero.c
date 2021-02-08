/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 03:18:04 by marvin            #+#    #+#             */
/*   Updated: 2020/12/06 03:47:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str_ptr;
	size_t i;

	str_ptr = (unsigned char *)s;
	i = 0;

	while (str_ptr[i] != '\0' && n > 0)
	{
		str_ptr[i] = '\0';
		i++;
		n--;
	}
}

int		main()
{
	char str[] = "Ficheiro Do Ficheiro Da Ficheira.";

	printf("\n%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str + 5); // se for + 4 é o '\0';
}

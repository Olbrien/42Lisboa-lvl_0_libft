/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 20:14:08 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:03:04 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char a[] = "Ola, quem fala?";
	char b = 'u';

	char c[] = "Ola, quem fala?";
	char d = 'u';

	printf("%s\n", strchr(a, b));

	printf("\n%s\n", ft_strchr(c, d));

	return (0);
}

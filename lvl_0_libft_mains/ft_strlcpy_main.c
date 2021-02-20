/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:19:11 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:03:22 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char a[] = "Ola, quem fala?";
	char b[] = "Sou eu.";

	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("%ld\n", strlcpy(b, a, -55));
	printf("%s\n", b);

	printf("\n%ld\n", ft_strlcpy(d, c, -55));
	printf("%s\n", d);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:05:11 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:03:18 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char a[] = "Ola, quem fala?";
	char b[] = "Sou eu.";

	char c[] = "Ola, quem fala?";
	char d[] = "Sou eu.";

	printf("%ld\n", strlcat(b, a, 13));
	printf("%s\n", b);

	printf("\n%ld\n", ft_strlcat(d, c, 13));
	printf("%s\n", d);

	return (0);
}

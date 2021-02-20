/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:21:21 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:00:41 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char dest1[] = "Roberto Leal esta vivo no nosso espirito.";
	char src[] = "Não sei se ele ainda canta.";
	char dest2[] = "Roberto Leal esta vivo no nosso espirito.";

	printf("\n%s \n", dest1);
	memcpy(dest1, src, 200);
	printf("%s\n", dest1);

	printf("\n%s \n", dest2);
	ft_memcpy(dest2, src, 200);
	printf("%s\n", dest2);
}

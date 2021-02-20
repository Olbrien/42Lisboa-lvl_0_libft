/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 23:40:57 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:00:47 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char dest1[] = "Infelizmente faleceu.";
	char src[] = "Não sei se ele ainda canta.";

	//printf("\n%s \n", dest1);
	//ft_memmove(dest1, src, 35);
	//printf("%s\n", dest1);

	printf("\n%s \n", dest1);
	ft_memmove(dest1, src, 20);
	printf("%s\n", dest1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 22:24:26 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:00:20 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char dest1[] = "Ro.";
	char src[] = "Não sei se ele ainda canta.";
	char letter = 'o';

	//printf("\n%s \n", dest1);
	//memccpy(dest1, src, letter, 55);
	//printf("%s\n", dest1);

	printf("\n%s \n", dest1);
	ft_memccpy(dest1, src, letter, 4);
	printf("%s\n", dest1);
}


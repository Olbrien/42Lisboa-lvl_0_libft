/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:59:52 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:02:57 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char *texto = "aab";
	char delimiter = 'b';
	char **array;
	int size;
	int i;
	i = 0;

	//size = arraysize(texto, delimiter) + 1; Set the size of the array. Set it by hand.
	array = ft_split(texto, delimiter);

	while(i < size)
	{
		printf("->%s\n", array[i++]);
	}
	printf("->%s", array[i]);

	return(0);
}

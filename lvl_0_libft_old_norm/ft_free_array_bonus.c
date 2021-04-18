/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 00:17:46 by tisantos          #+#    #+#             */
/*   Updated: 2021/04/19 00:17:56 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_array(char **array, int count)
{
	if (count == -1)
		return ;
	while (count >= 0)
	{
		free(array[count]);
		count--;
	}
	free(array);
}

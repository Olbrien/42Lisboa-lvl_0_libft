/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:10:20 by tisantos          #+#    #+#             */
/*   Updated: 2021/02/09 21:23:08 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_pow(int number, unsigned int power)
{
	long long	temp;

	temp = number;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		temp *= number;
		power--;
	}
	return (temp);
}

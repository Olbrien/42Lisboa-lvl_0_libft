/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:26:56 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:03:26 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char teste[] = "isto eh um teste 19";
	printf("%ld", ft_strlen(teste));

	printf("\n%ld", strlen(teste));
}

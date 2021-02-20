/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:44:50 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:03:13 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char *str1 = "tiago";
	char *str2 = "santos";
	char *str3;

	printf("%s\n%s\n", str1, str2);

	str3 = ft_strjoin(str1, str2);

	printf("%s", str3);
	return (0);
}

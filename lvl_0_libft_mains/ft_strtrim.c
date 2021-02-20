/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 21:57:08 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:04:20 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char *str = "aaaaasaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasad";
	char *tirar = "ssssssssssssssssssssssssssssssssssssssa";
	char *here;

	here = ft_strtrim(str, tirar);
	printf("%s\n", str);
	printf("%s", here);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:38:32 by marvin            #+#    #+#             */
/*   Updated: 2020/12/18 04:47:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int		main()
{
	for (int i = 0; i < 500; putchar(++i % 8 ? ' ' : '\n'))
        printf("%3d '%c' %c ", i, isprint((char unsigned)i) ? i : '?', isalnum(i) ? 'X' : ' ');
    putchar('\n');
}

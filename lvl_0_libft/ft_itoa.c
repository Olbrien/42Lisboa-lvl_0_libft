/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 17:15:08 by marvin            #+#    #+#             */
/*   Updated: 2020/12/19 17:49:25 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_reverse(char *str, int sig)
{
	int		i;
	int		end;
	char	*aux;

	i = 0;
	end = ft_strlen(str);
	if (!(aux = malloc(sizeof(char) * (end + 1 + sig))))
		return (NULL);
	if (sig)
	{
		aux[0] = '-';
		end++;
	}
	while (str[i])
		aux[--end] = str[i++];
	free(str);
	if (sig == 0)
		aux[i] = '\0';
	else
		aux[++i] = '\0';
	return (aux);
}

static int		digits(int n)
{
	int		dig;

	dig = 1;
	if (n == (-2147483648))
		return (dig = 12);
	while (n > 9)
	{
		dig++;
		n = n / 10;
	}
	return (dig);
}

static char		*min_value(char *ret)
{
	free(ret);
	ret = ft_strdup("-2147483648");
	return (ret);
}

char			*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		sig;

	sig = 0;
	i = 0;
	if (!(ret = malloc(sizeof(char) * (digits(n) + 1))))
		return (NULL);
	if (n == (-2147483648))
		return (min_value(ret));
	if (n < 0)
	{
		n = n * (-1);
		sig = 1;
	}
	while (n > 9)
	{
		ret[i++] = (n % 10) + '0';
		n = n / 10;
	}
	ret[i++] = n + '0';
	ret[i] = '\0';
	ret = ft_reverse(ret, sig);
	return (ret);
}

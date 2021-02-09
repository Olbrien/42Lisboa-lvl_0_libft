/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:33:37 by ncameiri          #+#    #+#             */
/*   Updated: 2021/02/09 20:15:27 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *str, int sig)
{
	int		i;
	int		end;
	char	*aux;

	i = 0;
	end = ft_strlen(str);
	aux = malloc(sizeof(char) * (end + 1 + sig));
	if (aux == NULL)
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

static int	digits(int n)
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

static char	*min_value(char *ret)
{
	ret = ft_strdup("-2147483648");
	return (ret);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	int		sig;

	sig = 0;
	i = 0;
	ret = malloc(sizeof(char) * (digits(n) + 1));
	if (ret == NULL)
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

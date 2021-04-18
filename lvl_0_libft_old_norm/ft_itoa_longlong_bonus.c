/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_longlong_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:55:27 by tisantos          #+#    #+#             */
/*   Updated: 2021/02/09 21:59:53 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_minus(long long *n, long long *minus, long long *temp)
{
	if (*n == -9223372036854775807 - 1)
	{
		*n = *n + 1;
		*minus = -1;
		*temp = 1;
		*n = *n * -1;
	}
	else if (*n < 0)
	{
		*minus = -1;
		*n = *n * -1;
		*temp = 0;
	}
	else if (*n >= 0)
	{
		*minus = 1;
		*temp = 0;
	}
}

static int	ft_itoa_len(long long n)
{
	long long int			len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static void	ft_itoa_write(char *finish, long long len,
								long long n, long long temp)
{
	while (n > 9)
	{
		finish[len--] = (n % 10) + '0' + temp;
		n = n / 10;
		temp = 0;
	}
	finish[len] = n + '0';
}

char	*ft_itoa_longlong(long long n)
{
	long long				minus;
	long long				temp;
	long long				len;
	char					*finish;

	ft_itoa_minus(&n, &minus, &temp);
	len = ft_itoa_len(n);
	if (minus == -1)
	{
		finish = malloc((len + 2) * sizeof(char));
		if (finish == NULL)
			return (NULL);
		len++;
		finish[0] = '-';
	}
	else
	{
		finish = malloc((len + 1) * sizeof(char));
		if (finish == NULL)
			return (NULL);
	}
	finish[len--] = '\0';
	ft_itoa_write(finish, len, n, temp);
	return (finish);
}

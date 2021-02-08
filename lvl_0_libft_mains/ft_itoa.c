/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 02:36:35 by marvin            #+#    #+#             */
/*   Updated: 2020/12/10 05:01:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static		int	length(int n)
{
	int number;
	int i;

	number = n;
	i = 0;
	if (number == 0)
		return (2);
	if (number < 0)
	{
		number *= -1;
		i++;
	}
	while (number > 0)
	{
		number = number / 10;
		i++;
	}
	return (i + 1);
}

static		char *ifmorezero(int n)
{
	char *str;
	int i;
	int number;
	int modulus;

	i = 0;
	number = n;
	if(!(str = malloc(length(number) * sizeof(str))))
		return (NULL);
	str[length(number) - 1] = '\0';
	i = length(number) - 2;
	while (number > 0)
	{
		modulus = number % 10;
		str[i] = modulus + '0';
		number = number / 10;
		i--;
	}

	return (str);
}

static		char *iflesszero(int n)
{
	char *str;
	int i;
	int number;
	int modulus;

	i = 0;
	number = n;
	number *= -1;
	if(!(str = malloc(length(number) * sizeof(str))))
		return (NULL);
	str[0] = '-';
	str[length(number)] = '\0';
	i = length(number) - 1;
	while (number > 0)
	{
		modulus = number % 10;
		str[i] = modulus + '0';
		number = number / 10;
		i--;
	}
	return (str);
}

static		char *ifzero(int n)
{
	char *str;
	if(!(str = malloc(length(n) * sizeof(str))))
		return (NULL);
	str[0] = 0 + '0';
	str[1] = '\0';
	return (str);
}

char *ft_itoa(int n)
{
	char *str;
	int number;

	number = n;
	if(!(str = malloc(length(n) * sizeof(str))))
		return (NULL);
	if (number == 0 || number == -0)
		str = ifzero(n);
	else if (number < 0)
		str = iflesszero(n);
	else if (number > 0)
		str = ifmorezero(n);

	printf("%s\n", str);
	return (str);
}


int		main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;

	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;

	ft_itoa(number1);
	ft_itoa(number2);
	ft_itoa(number3);
	ft_itoa(number4);
	ft_itoa(number5);
	ft_itoa(number6);
	ft_itoa(number7);
	ft_itoa(number8);
	ft_itoa(number9);
	ft_itoa(number10);
	ft_itoa(number11);
	ft_itoa(number12);

/*
	for (int i = -100; i <= 0 ; i++)
	{
		ft_itoa(i);
	}

	for (int i = 0; i <= 100 ; i++)
	{
		ft_itoa(i);
	}
*/
	return (0);
}

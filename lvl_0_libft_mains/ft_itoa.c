/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 02:36:35 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:58:10 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

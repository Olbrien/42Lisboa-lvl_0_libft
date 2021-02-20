/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:36:16 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:57:31 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	printf("%d \n", isalpha('c'));
	printf("%d \n", ft_isalpha('c'));

	printf("\n%d \n", isalpha('D'));
	printf("%d \n", ft_isalpha('D'));

	printf("\n%d \n", isalpha('A'));
	printf("%d \n", ft_isalpha('A'));

	printf("\n%d \n", isalpha('Z'));
	printf("%d \n", ft_isalpha('Z'));

	printf("\n%d \n", isalpha('2'));
	printf("%d \n", ft_isalpha('2'));

	printf("\n%d \n", isalpha('8'));
	printf("%d \n", ft_isalpha('8'));

	printf("\n%d \n", isalpha('0'));
	printf("%d \n", ft_isalpha('0'));

	printf("\n%d \n", isalpha(' '));
	printf("%d \n", ft_isalpha(' '));

	return(0);
}

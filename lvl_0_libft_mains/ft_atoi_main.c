/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:56:24 by marvin            #+#    #+#             */
/*   Updated: 2020/12/04 16:28:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	char a[] = "-1231as23";
	char b[] = "-+1231as23";
	char c[] = "+a231as23";
	char d[] = " 21+1231as23";
	char e[] = " aasdwae";

	printf("\n%d \n", atoi(a));
	printf("%d \n", ft_atoi(a));

	printf("\n%d \n", atoi(b));
	printf("%d \n", ft_atoi(b));

	printf("\n%d\n", atoi(c));
	printf("%d \n", ft_atoi(c));

	printf("\n%d \n", atoi(d));
	printf("%d \n", ft_atoi(d));

	printf("\n%d \n", atoi(e));
	printf("%d \n", ft_atoi(e));

	return(0);
}

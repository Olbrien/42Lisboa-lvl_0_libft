/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:00:53 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:04:00 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
   char str1[] = "asdsa";
   char str2[] = "asdsaa";

   printf("\n%d \n",strncmp(str1, str2, 20));
   printf("%d \n",ft_strncmp(str1, str2, 20));

   printf("\n%d \n",strncmp(str1, str2, 21));
   printf("%d \n",ft_strncmp(str1, str2, 21));

   printf("\n%d \n",strncmp(str1, str2, 25));
   printf("%d \n",ft_strncmp(str1, str2, 25));

   printf("\n%d \n",strncmp(str1, str2, 19));
   printf("%d \n",ft_strncmp(str1, str2, 19));

   printf("\n%d \n",strncmp(str1, str2, 1));
   printf("%d \n",ft_strncmp(str1, str2, 1));

   printf("\n%d \n",strncmp(str1, str2, 0));
   printf("%d \n",ft_strncmp(str1, str2, 0));

   printf("\n%d \n",strncmp(str1, str2, 3));
   printf("%d \n",ft_strncmp(str1, str2, 3));

   printf("\n%d \n",strncmp(str1, str2, 2));
   printf("%d \n",ft_strncmp(str1, str2, 2));

   printf("\n%d \n",ft_strncmp(str1, str2, -1));
   printf("%d \n",ft_strncmp(str1, str2, -10));

   return(0);
}

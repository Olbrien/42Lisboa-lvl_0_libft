/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 02:05:41 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:00:26 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '/';
   char *ret;

   ret = ft_memchr(str, ch, 6);
   printf("%s \n", ret);
   printf("%s", str);

   return(0);
}

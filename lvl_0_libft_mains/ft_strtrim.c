/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 21:57:08 by marvin            #+#    #+#             */
/*   Updated: 2020/12/08 16:57:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*removechar(char const *s1, char set)
{
	char *str;
	int i;
	int b;

	i = 0;
	b = 0;
	if(!(str = malloc(ft_strlen(s1) * sizeof(char))))
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] != set)
		{
			str[b] = s1[i];
			b++;
		}
		i++;
	}
	str[b] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *start_str;
	char *final_str;
	int i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if(!(start_str = malloc(ft_strlen(s1) * sizeof(char))))
		return (NULL);
	start_str = (char *)s1;
	while (set[i] != '\0')
	{
		start_str = removechar(start_str, set[i]);
		i++;
	}
	if(!(final_str = malloc(ft_strlen(start_str) * sizeof(char))))
		return (NULL);
	final_str = start_str;
	return (final_str);
}

int		main()
{
	char *str = "aaaaasaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasad";
	char *tirar = "ssssssssssssssssssssssssssssssssssssssa";
	char *here;

	here = ft_strtrim(str, tirar);
	printf("%s\n", str);
	printf("%s", here);

}

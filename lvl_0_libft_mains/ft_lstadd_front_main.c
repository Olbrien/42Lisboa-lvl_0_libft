/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 20:26:21 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:58:54 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	t_list *head;
	if(!(head = malloc(sizeof(t_list))))
		return 0;

	head->content = (char *)"olah";
	head->next = NULL;

	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return 0;

	new->content = (char *)"adeus";
	new->next = NULL;

	printf("\nHead -> %s\n", (char *)head->content);

	ft_lstadd_front(&head, new);

	printf("Head -> %s\n", (char *)head->content);
}

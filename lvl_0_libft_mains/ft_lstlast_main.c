/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 01:34:15 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:59:36 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;
	t_list *last;

	head = ft_lstnew("UM");
	dois = ft_lstnew("DOIS");
	tres = ft_lstnew("TRES");
	quatro = ft_lstnew("QUATRO");

	head->next = dois;
	dois->next = tres;
	tres->next = quatro;

	printf("\nO ultimo t_list eh -- %s -- e tem pointer de %p \n", (char *)quatro->content, quatro->next);

	last = ft_lstlast(head);

	printf("O ultimo t_list eh -- %s -- e tem pointer de %p \n", (char *)last->content, last->next);
}

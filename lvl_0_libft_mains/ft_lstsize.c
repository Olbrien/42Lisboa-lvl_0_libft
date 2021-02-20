/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 00:43:42 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 15:00:14 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	t_list *head;
	t_list *last;

	t_list *dois;
	t_list *tres;

// Definir as structs

	if (!(head = malloc(sizeof(t_list))))
		return 0;  // Estes aqui são 0 porque estás no MAIN e é um -> Int <-. Logo é 0.

	head->content = "Um";
	head->next = NULL;

	if (!(dois = malloc(sizeof(t_list))))
		return 0;

	dois->content = "Dois";
	dois->next = NULL;

	if (!(tres = malloc(sizeof(t_list))))
		return 0;

	tres->content = "Tres";
	tres->next = NULL;

// Meter o Last como o primeiro e indo avançar até chegar ao último

	last = head;

	while (last->next != NULL)
		last = last->next;
	last->next = dois;

	last = head;

	while (last->next != NULL)
		last = last->next;
	last->next = tres;

	printf("%s -- %s -- %s -- %p\n", (char *)head->content, (char *)head->next->content,
							 (char *)head->next->next->content, head->next->next->next);

	printf("%d", ft_lstsize(head));

}

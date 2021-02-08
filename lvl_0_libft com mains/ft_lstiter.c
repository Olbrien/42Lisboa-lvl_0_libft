/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:33:45 by marvin            #+#    #+#             */
/*   Updated: 2020/12/16 16:39:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void f(void *nome)
{
	char *a = "-- Olah --";
	ft_strlcpy(nome, a, ft_strlen(a) + 1);
}


int		main()
{
	t_list *head;
	t_list *um;
	t_list *dois;
	t_list *tres;

	char *c1 = ft_strdup("-- Adeus Um --");
	char *c2 = ft_strdup("-- Adeus Dois --");
	char *c3 = ft_strdup("-- Adeus Tres --");
	char *c4 = ft_strdup("-- Adeus Quatro --");

	head = ft_lstnew(c1);
	um = ft_lstnew(c2);
	dois = ft_lstnew(c3);
	tres = ft_lstnew(c4);

	ft_lstadd_back(&head, um);
	ft_lstadd_back(&head, dois);
	ft_lstadd_back(&head, tres);

	int size;
	size = ft_lstsize(head);
	t_list *start;
	start = head;

	for(int i = 0; i < size; i++)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}

	head = start;

	ft_lstiter(head, f);
	printf("\n");

	for(int i = 0; i < size; i++)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}


	return (0);
}

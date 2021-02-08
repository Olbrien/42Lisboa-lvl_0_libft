/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 04:32:47 by marvin            #+#    #+#             */
/*   Updated: 2020/12/16 15:49:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *next;

	if (!lst)
		return ;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		free(current->content);
		free(current);
		//ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}



void	del(void *este)
{
 	free (este);
}


int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;

	char *c1 = ft_strdup("Um --");
    char *c2 = ft_strdup("Dois --");
    char *c3 = ft_strdup("Tres --");
    char *c4 = ft_strdup("Quatro --");

	head = ft_lstnew(c1);
	dois = ft_lstnew(c2);
	tres = ft_lstnew(c3);
	quatro = ft_lstnew(c4);

	ft_lstadd_back(&head, dois);
	ft_lstadd_back(&head, tres);
	ft_lstadd_back(&head, quatro);

	printf("\n%s	    %s	%s	    %s\n", (char *)head->content, (char *)head->next->content,
										(char *)head->next->next->content,
										(char *)head->next->next->next->content);
	printf("%p %p %p %p %p\n", head, head->next, head->next->next, head->next->next->next,
										head->next->next->next->next);

	ft_lstclear(&head, del);

	printf("\n%p\n", head);

	return (0);
}

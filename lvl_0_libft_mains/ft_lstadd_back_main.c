/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 02:09:59 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:58:51 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;

	if(!(head = malloc(sizeof(t_list))))
		return 0;
	head->content = "-- UM --";
	head->next = NULL;

	if(!(dois = malloc(sizeof(t_list))))
		return 0;
	dois->content = "-- DOIS --";
	dois->next = NULL;

	if(!(tres = malloc(sizeof(t_list))))
		return 0;
	tres->content = "-- TRES --";
	tres->next = NULL;

	if(!(quatro = malloc(sizeof(t_list))))
		return 0;
	quatro->content = "-- QUATRO --";
	quatro->next = NULL;


	head->next = dois;
	head->next->next = tres;

	printf("All Numbers %s %s %s %p", (char *)head->content, (char *)head->next->content,
									(char *)head->next->next->content,
									head->next->next->next);

	ft_lstadd_back(&head, quatro);

	printf("\nAll Numbers %s %s %s %s %p", (char *)head->content, (char *)head->next->content,
										(char *)head->next->next->content,
										(char *)head->next->next->next->content,
										head->next->next->next->next);


/*	Se vais testar estes (Este é só o UM feito.) Comenta os de cima incluindo os headnext dois e headnext tres

	printf("All Numbers %s %p", (char *)head->content, 	head->next);

	ft_lstadd_back(&head, dois);

	printf("\nAll Numbers %s %s %p", (char *)head->content, (char *)head->next->content,
										head->next->next);

*/
	return(0);
}

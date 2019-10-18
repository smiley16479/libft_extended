/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:53:59 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/18 18:15:33 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

#include <stdio.h>

void ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	t_list *tmp;

	tmp = *alst; 
	while ((tmp)->next)
		tmp = (tmp)->next;
	printf("ds back tmp:%d\n", *((int*)((tmp)->content)));
	printf("ds back new:%d\n", *((int*)(new->content)));
	(tmp)->next = new;
	printf("ds back tmp:%d\n", *((int*)((tmp)->content)));	
	tmp = (tmp)->next;

	printf("ds back tmp:%d\n", *((int*)((tmp)->content)));	
}



int main(void)
{
	int h;
	int i[11] = {0};
	int j = 111;

	t_list *lists;
	t_list *begin;
	t_list lists_to_add;
	t_list lists_first;

	lists_to_add.content = &j;
	lists_to_add.next = NULL;
	//lists_first.content = &k;
	lists = &lists_first;

	h = 0;
	while (h < 10)
	{
		i[h] = h;
		lists->content = (void *)&i[h];
		lists->next = ft_lstnew((void *)(&i[h]));
		if (h == 0)
			begin = lists;
		lists = lists->next;
		h++;
	}
	lists->next = NULL;
 //	printf("%d\n", (*((int*)((*lists)->content))));
 //	printf("%d\n", (*((int*)((*(lists + 1))->content))));
 //	ft_lstadd_front(lists, &lists_to_add);
 //	printf("%d\n", (*((int*)((*(lists))->content))));
 //	printf("%d\n", (*((int*)((*(lists + 1))->content))));

	lists = begin;

	while (lists->next)
	{
		lists = lists->next;
		printf("%d\n", *((int*)(lists->content)));
	}
	printf("\n\n");

	ft_lstadd_back(&lists, &lists_to_add);
	lists = begin;
	while (lists->next)
	{
		printf("%d\n", *((int*)(lists->content)));
		lists = lists->next;
	}
	printf("%d\n", *((int*)(lists->content)));
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:53:59 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/20 10:45:32 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (!alst || !(*alst) || !new)
		return ;
	tmp = *alst;
	while ((tmp)->next)
		tmp = (tmp)->next;
	(tmp)->next = new;
	new->next = NULL;
}

/*
**int main(void)
**{
**	int h;
**	int i[11] = {0};
**	int j = 111;
**	int k = 222;
**
**	t_list *lists;
**	t_list *begin;
**	t_list lists_to_add;
**	t_list lists_first;
**
**	lists_to_add.content = &j;
**	lists_to_add.next = NULL;
**	//lists_first.content = &k;
**	lists = &lists_first;
**	lists_first.content = &k;
**
**	h = 0;
**	while (h < 10)
**	{
**		i[h] = h;
**	//	lists->content = (void *)&i[h];
**		lists->next = ft_lstnew((void *)(&i[h]));
**		if (h == 0)
**			begin = lists;
**		lists = lists->next;
**		h++;
**	}
**	lists->next = NULL;
** //	printf("%d\n", (*((int*)((*lists)->content))));
** //	printf("%d\n", (*((int*)((*(lists + 1))->content))));
** //	ft_lstadd_front(lists, &lists_to_add);
** //	printf("%d\n", (*((int*)((*(lists))->content))));
** //	printf("%d\n", (*((int*)((*(lists + 1))->content))));
**
**	lists = begin;
**
**	while (lists->next)
**	{
**		printf("%d\n", *((int*)(lists->content)));
**		lists = lists->next;
**	}
**	printf("%d\n", *((int*)(lists->content)));
**	printf("\n\n");
**
**	ft_lstadd_back(&lists, &lists_to_add);
**	lists = begin;
**	while (lists->next)
**	{
**		lists = lists->next;
**		printf("%d\n", *((int*)(lists->content)));
**	}
**	return (0);
**}
*/
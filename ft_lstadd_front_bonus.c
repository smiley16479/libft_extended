/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:53:59 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/18 15:49:06 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

/*
**#include <stdio.h>
**#include <stdlib.h>
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = (*alst);
	*alst = new;
}

/*
**int main(void)
**{
**	int h;
**	int i[10] = {0};
**	int j = 111;
**	//int k = 222;
**	t_list *lists;
**	t_list *begin;
**	t_list lists_to_add;
**	t_list lists_first;
**
**	lists_to_add.content = &j;
**	//lists_first.content = &k;
**	lists = &lists_first;
**
**	h = 0;
**	while (h < 10)
**	{
**		i[h] = h;
**		lists->content = (void *)&i[h];
**		lists->next = ft_lstnew((void *)(&i[h]));
**		if (h == 0)
**			begin = lists;
**		lists = lists->next;
**		h++;
**	}
** //	printf("%d\n", (*((int*)((*lists)->content))));
** //	printf("%d\n", (*((int*)((*(lists + 1))->content))));
** //	ft_lstadd_front(lists, &lists_to_add);
** //	printf("%d\n", (*((int*)((*(lists))->content))));
** //	printf("%d\n", (*((int*)((*(lists + 1))->content))));
**
**	lists = begin;
**
**	h = -1;
**	int a = 1;
**	while (h < 10)
**	{
**		h++;
**		if (h == 10 && a)
**		{
**			ft_lstadd_front(&begin, &lists_to_add);
**			lists = begin;
**			h = 0;
**			a = 0;
**			printf("\n\n");
**		}
**
**	//	printf("%d, et next : %d \n", (int)(begin)->content,(int)begin->next);
**	printf("%d, et next : %d, h = %d\n",
**		*((int*)(lists->content)),(int)lists->next, h);
**		lists = lists->next;
**	}
**	return (0);
**}
*/

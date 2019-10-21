/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:50:59 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/20 14:43:26 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*
**int main(void)
**{
**	int h;
**	int i[11] = {0};
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
**	while (h < 2)
**	{
**		i[h] = h;
**		lists->content = (void *)&i[h];
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
**	&lists_first == lists ? printf("oui") : 1;
**	printf("%d", ft_lstsize(lists));
**
**	return (0);
**}
*/

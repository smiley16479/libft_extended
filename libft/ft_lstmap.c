/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:28:22 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/21 16:26:23 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**void	delet(void *content)
**{
**	free(content);
**}
**
**void *fa(void *qlq)
**{
** //	printf("%d\n", (*((int*)qlq)));
**	(*(int*)qlq)++;
**	return (qlq);
**}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *new_lst;
	t_list *new_lstb;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	new_lstb = new_lst;
	lst = lst->next;
	while (lst)
	{
		if (!(new_lst->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_lstb, del);
			return (0);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (new_lstb);
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
**	t_list *lists_new;
**
**	lists_to_add.content = &j;
**	lists_to_add.next = NULL;
**	lists = &lists_first;
**	lists_first.content = &k;
**
**	h = 0;
**	while (h < 10)
**	{
**		i[h] = h;
**		lists->next = ft_lstnew((void *)(&i[h]));
**		if (h == 0)
**			begin = lists;
**		lists = lists->next;
**		h++;
**	}
**	lists->next = NULL;
**	lists = begin;
**
**	while (lists)
**	{
**		printf("%d\n", *((int*)(lists->content)));
**		lists = lists->next;
**	}
**	printf("\n\n");
**	lists = begin;
**	lists_new = ft_lstmap(lists, fa, delet);
**	while (lists_new)
**	{
**		printf("%d\n", *((int*)(lists_new->content)));
**		lists_new = lists_new->next;
**	}
**	return (0);
**}
*/

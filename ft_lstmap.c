/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:28:22 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/19 16:59:09 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *new_lst;
	if (!lst || !del)
		return NULL;
	while (lst)
	{
		if (!(new_lst = ft_lstnew(f((lst)->content))))
			return NULL;
		lst = lst->next;
		new_lst = new_lst->next;
	}
	return (new_lst);
}
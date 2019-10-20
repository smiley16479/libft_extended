/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:42:34 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/19 16:27:16 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *origin;
	t_list *tmp;
		
	if (!lst || !(*lst) || !del)
		return ;
	origin = (*lst);
	while(*lst) //((*lst)->next)
	{
		del((*lst)->content);
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	origin = NULL;
}
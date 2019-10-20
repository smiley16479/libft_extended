/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:05:21 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/19 16:10:23 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
		if (!lst || !f)
		return ;
	while(lst)
	{
		f((lst)->content);
		lst = (lst)->next;
	}
}
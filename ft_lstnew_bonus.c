/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:54:03 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/17 18:53:42 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

t_list *ft_lstnew(void *content)
{
	t_list *lstnew;
	if (!(lstnew = (t_list*)malloc(sizeof(*lstnew))))
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

/*
**int main(void)
**{
**	char *a;
**	char b = 'b'; 
**	a = &b;
**	t_list *list;
**	list = ft_lstnew(a);
**	printf("%c", *((char*)list->content));
**
**	return (0);
**}
*/

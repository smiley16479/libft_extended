/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:30:02 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/15 15:41:35 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** Mets à zero tous les bytes spécifié par n
*/

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*((unsigned char*)s++) = 0;
}

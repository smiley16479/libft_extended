/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:35:55 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/13 18:56:55 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void *objects;

	if ((objects = malloc(count * size)) != NULL)
	{
		ft_bzero(objects, count * size);
		return (objects);
	}
	else
		return (NULL);
}

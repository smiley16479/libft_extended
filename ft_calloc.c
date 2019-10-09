/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:35:55 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 14:20:06 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	ft_bzero1(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void *objects;

	if ((objects = malloc(count * size)) != NULL)
	{
		ft_bzero1(objects, count * size);
		return (objects);
	}
	else
		return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/15 14:15:14 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c,
size_t n)
{
	while (n--)
	{
		*((unsigned char*)dst++) = *((unsigned char*)src++);
		if ((unsigned char)c == (*(unsigned char*)(src - 1)))
			return (dst);
	}
	return (NULL);
}

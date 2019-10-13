/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/13 17:30:43 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;

	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	while (n--)
	{
		*(str_dst++) = *((unsigned char*)str_src++);
		if ((unsigned char)c == (*(unsigned char*)(str_src - 1)))
			return (str_dst);
	}
	return (NULL);
}

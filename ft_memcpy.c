/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/08 17:55:50 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *str;
	unsigned char *strSrc;
	size_t l;

	str = (unsigned char*)dst;
	strSrc = (unsigned char*)src;
	l = 0;
	while (l < n)
	{
		str[l] = strSrc[l];
		l++;
	}
	return (dst);
}

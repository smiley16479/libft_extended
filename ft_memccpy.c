/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/08 17:59:30 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *str;
	unsigned char *strSrc;
	size_t l;

	str = (unsigned char*)dst;
	strSrc = (unsigned char*)src;
	l = 0;
	while (l < n)
	{
		if ((unsigned char)c == strSrc[l])
			break;
		str[l] = strSrc[l];
		l++;
	}
	return (dst);
}

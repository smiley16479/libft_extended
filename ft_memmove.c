/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 15:41:26 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*str_src;
	size_t			l;

	str = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	l = 0;
	while (l < len)
	{
		str[l] = str_src[l];
		l++;
	}
	return (dst);
}

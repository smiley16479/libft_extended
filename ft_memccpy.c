/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 15:38:27 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
size_t n)
{
	unsigned char	*str;
	unsigned char	*str_src;
	size_t			l;

	str = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	l = 0;
	while (l < n)
	{
		if ((unsigned char)c == str_src[l])
			break ;
		str[l] = str_src[l];
		l++;
	}
	return (dst);
}

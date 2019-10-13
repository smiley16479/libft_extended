/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:00:08 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/13 19:52:17 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t h;
	size_t i;

	h = 0;
	while (dst[h])
		h++;
	i = 0;
	while (h + i < dstsize && src[i] != '\0')
	{
		dst[h + i] = src[i];
		i++;
	}
	dst[h + i] = '\0';
	return (i + h);
}


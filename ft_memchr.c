/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 13:34:26 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			l;
	unsigned char	*str;

	l = 0;
	str = (unsigned char*)s;
	while (l < n)
	{
		if (str[l] == (unsigned char)c)
			return (&str[l]);
		l++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 13:34:56 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			l;
	unsigned char	*str1;
	unsigned char	*str2;

	l = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (l < n)
	{
		if (str1[l] != str2[l])
			return (str1[l] - str2[l]);
		l++;
	}
	return (0);
}

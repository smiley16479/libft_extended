/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:00:08 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/08 15:20:00 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t i;

	if (*needle == 0)
		return (char *)haystack;
	h = 0;
	while (haystack[h] && h < len)
	{
		i = 0;
		if (haystack[h] == needle[i])
			while (haystack[h + i] == needle[i] && h + i < len)
			{
				i++;
				if (needle[i] == 0)
					return (char *)&haystack[h];
			}
		h++;
	}
	return (0);
}

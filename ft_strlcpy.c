/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:00:08 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/15 14:17:21 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(src);
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (j);
}

/*
**int main(void)
**{
**	char* src = "helloCestMoi"; //12 + 1 ('\0')
**	char dest1[50] = "bonjour les aminch           /"; //30 char + 1 ('\0')
**	char dest2[50] = "bonjour les aminch           /";
**	printf("off retour: %lu dest1 :%s\n", strlcpy(dest1, src, 0), dest1);
**	printf("At  retour: %lu dest2 :%s\n", ft_strlcpy(dest2, src, 0), dest2);
**
**
**	return (0);
**}
*/

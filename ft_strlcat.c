/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:00:08 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/15 18:09:46 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dest_length;
	size_t src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	if (dstsize < dest_length)
		return (dstsize + src_length);
	i = 0;
	while (src[i] && dest_length + i + 1 < dstsize)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (src_length + dest_length);
}

/*
**int main(void)
**{
**	char* src = "helloCestMoi"; //12 + 1 ('\0')
**	char dest1[50] = "bonjour les aminch           /"; //30 char + 1 ('\0')
**	char dest2[50] = "bonjour les aminch           /";
**	printf("off retour: %lu dest1 :%s\n", strlcat(dest1, src, 45), dest1);
**	printf("At  retour: %lu dest2 :%s\n", ft_strlcat(dest2, src, 45), dest2);
**
**
**	return (0);
**}
*/

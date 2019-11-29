/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:17:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/21 13:49:20 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *original_dest;

	if (!dst && !src)
		return (NULL);
	original_dest = dst;
	while (len--)
	{
		if (src < dst)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
		else
			*((unsigned char*)dst++) = *((unsigned char*)src++);
	}
	return (original_dest);
}

/*
**int main()
**{
**	char str[] = "HelloSalut";
**	printf("%s", ft_memmove( &str[4], str, 6));
**	return(0);
**}
*/

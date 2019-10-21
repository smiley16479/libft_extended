/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:12:30 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/21 15:06:11 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	n;

	n = 0;
	while (s1[n])
		n++;
	if (!(str = (char*)malloc(sizeof(*str) * n + 1)))
		return (0);
	n = 0;
	while (*s1)
	{
		str[n] = *(s1++);
		n++;
	}
	str[n] = '\0';
	return (str);
}

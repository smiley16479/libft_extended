/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:52:17 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/21 15:14:33 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	len(char const *s1)
{
	size_t len;

	len = 0;
	while (*s1)
	{
		s1++;
		len++;
	}
	return (len);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenght1;
	size_t	lenght2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	lenght1 = 0;
	lenght2 = 0;
	if ((str = (char*)malloc(sizeof(str) * (len(s1) + len(s2) + 1))) != NULL)
	{
		while (s1[lenght1])
		{
			str[lenght1] = s1[lenght1];
			lenght1++;
		}
		while (s2[lenght2])
		{
			str[lenght1 + lenght2] = s2[lenght2];
			lenght2++;
		}
	}
	else
		return (NULL);
	str[lenght1 + lenght2] = '\0';
	return (str);
}

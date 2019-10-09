/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:12:30 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 15:30:20 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	n;
	size_t	l;

	n = 1;
	while (s1[n - 1])
		n++;
	if ((str = (char*)malloc(sizeof(str) * n)) != NULL)
	{
		l = 0;
		while (l < n)
		{
			str[l] = s1[l];
			l++;
		}
	}
	return (str);
}

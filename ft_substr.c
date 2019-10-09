/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:41:19 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 15:39:35 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	n = 0;
	if ((str = (char*)malloc(sizeof(*str) * len + 1)) != NULL)
		while (n < len && s[n])
		{
			str[n] = s[start + n];
			n++;
		}
	else
		return (NULL);
	str[n] = '\0';
	return (str);
}

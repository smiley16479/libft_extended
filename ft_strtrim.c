/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:31:14 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/12 13:37:33 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static int	is_set(char const char_s1, char const *set)
{
	while (*set)
	{
		if (*set == char_s1)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	index_pre;
	size_t	index_suf;
	char	*str;

	index_pre = 0;
	index_suf = 0;
	while (s1[index_suf])
		index_suf++;
	while (is_set(s1[index_pre], set))
		index_pre++;
	while (is_set(s1[index_suf - 1], set))
		index_suf--;
	if (!(str = (char*)malloc(sizeof(*str) * (index_suf - index_pre))))
		return (NULL);
	i = 0;
	while (index_pre < index_suf)
	{
		str[i] = s1[index_pre];
		i++;
		index_pre++;
	}
	return (str);
}

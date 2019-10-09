/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:43:46 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/09 17:56:31 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	str_len(char const *s1)
{
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

static size_t	str_trim_check(char const *s1, char const *set, size_t index)
{
	size_t i;
	size_t j;
	size_t k;
	size_t l;

	i = 0;
	k = str_len(set);
	l = index == 0 ? str_len(s1) : 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				break ;
			else if (j == (k - 1))
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if ((str = (char*)malloc()) != NULL)
	{
	}
	return (str);
}
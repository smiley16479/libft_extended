/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:31:14 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/16 00:44:12 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
	int		index_pre;
	int		index_suf;
	char	*str;

	index_pre = 0;
	index_suf = ft_strlen(s1);
	while (is_set(s1[index_pre], set))
		index_pre++;
	while (index_suf && is_set(s1[index_suf - 1], set))
		index_suf--;
	i = index_suf - index_pre > 0 ? index_suf - index_pre : 0;
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	i = 0;
	while (index_pre < index_suf)
	{
		str[i] = s1[index_pre];
		i++;
		index_pre++;
	}
	str[i] = '\0';
	return (str);
}

/*
**int main()
**{
**	char *s;
**	char *str = "               ";
**
**	s = ft_strtrim(str, " ");
**	printf("%s\n", s);
**	free(s);
**	return(0);
**}
*/

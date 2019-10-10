/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:53:29 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/10 18:01:39 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char  **count_strs(const char *s,char c)
{
	int i;
	char **strs;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)	
		{
			while (*s != c && *s)
				s++;
			i++;
		}
	}
	if (!(strs = (char**)malloc(sizeof(*strs) * (i + 1))))
		return (strs);
	else	
		return (NULL);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t i_tmp;
	size_t cpt;

	i = 0;
	cpt = 0;
	while(s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		i_tmp = i;
		if (s[i] != c && s[i])
			while (s[i] != c && s[i] != '\0')
				i++;
		if (!(strs[cpt] = ))
		cpt++;
	}

}
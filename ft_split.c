/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:53:29 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/16 16:51:54 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static char	**free_tab(char **strs, size_t *cpt)
{
	while (*cpt)
		free(strs[(*cpt)--]);
	free(strs);
	return (NULL);
}

static char	**count_strs(const char *s, char c)
{
	int		i;
	char	**strs;

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
	if ((strs = (char**)malloc(sizeof(*strs) * (i + 1))))
		return (strs);
	else
		return (NULL);
}

static char	*allocncpy(char const *s, size_t i_tmp, size_t i)
{
	size_t	j;
	char	*str;

	j = 0;
	if (!(str = malloc(sizeof(*str) * (i - i_tmp + 1))))
		return (0);
	while (i_tmp < i)
	{
		str[j] = s[i_tmp];
		j++;
		i_tmp++;
	}
	str[j] = '\0';
	return (str);
}

char		**ft_split(char const *s, char c)
{
	size_t	i[3];
	char	**strs;

	i[0] = 0;
	i[1] = 0;
	if (!(strs = count_strs(s, c)))
		return (NULL);
	while (s[i[0]])
	{
		while (s[i[0]] == c)
			i[0]++;
		i[2] = i[0];
		if (s[i[0]] != c && s[i[0]])
		{
			while (s[i[0]] != c && s[i[0]])
				i[0]++;
			if (!(strs[i[1]++] = allocncpy(s, i[2], i[0])))
				return (free_tab(strs, &i[1]));
		}
	}
	strs[i[1]] = NULL;
	return (strs);
}

/*
**	int main(void)
**	{
**		char *str = "Haloa comment ca va ?";
**		char set  = 'a';
**		char **strs;
**
**		strs = ft_split(str, set);
**		while (*strs)
**		{
**	 		printf("%s\n", *strs);
**			strs++;
**		}
**		return(0);
**	}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:43:46 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/10 16:51:34 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	str_len(char const *s1)
{
	size_t	len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}

static size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (i < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}

static size_t	prefix(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = str_len(set);
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				break ;
			else if (j == k - 1)
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

static size_t	suffix(char const *s1, char const *set, size_t i)
{
	size_t j;
	size_t k;

	k = str_len(set);
	while (i)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				break ;
			else if (j == k - 1)
				return (i);
			j++;
		}
		i--;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	index_pre;
	size_t	index_suf;

	str = NULL;
	len = str_len(s1);
	index_pre = prefix(s1, set);
	index_suf = suffix(s1, set, len - 1);
	printf("str_len : %zu, set_len : %zu, index_pre : %zu , index_suf : %zu\n", len, str_len(set), index_pre, index_suf);
	if (str_len(set) == 0 || len)
	{
		if ((str = (char*)malloc(str_len(s1)+ 1)) != NULL)
			ft_strlcpy(str, s1, len);
	}
	else if ((str = (char*)malloc(index_pre + index_suf + 1)) != NULL)
		ft_strlcpy(str, &s1[index_pre], (index_suf - index_pre + 1));
	return (str);
}

void main()
{
	char src[] = "";
	printf("%s", ft_strtrim(src, " "));

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:19:28 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/15 20:15:59 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	strlen(char const *s)
{
	size_t l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

static void		strcpy(const char *src, char *dest)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = *src;
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!(str = (char*)malloc(sizeof(*str) * strlen(s) + 1)))
		return (0);
	strcpy(s, str);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
**int main(void)
**{
**	char *s = "violet";
**
**	printf("%s", ft_strmapi(s, funct));
**	return (0);
**}
*/
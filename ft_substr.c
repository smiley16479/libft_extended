/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:41:19 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/16 01:20:45 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	n = 0;
	if (start < ft_strlen(s))
	{
		if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
			return (NULL);
		while (n < len && s[n])
		{
			str[n] = s[start + n];
			n++;
		}
	}
	else
		return ("");
	str[n] = '\0';
	return (str);
}


int main()
{
	char* a;
	char* str = "hellofsfgsfgsg";

	a = ft_substr(str, 200, 10);
	write(1, a, 1);
	free(a);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:21:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/12 19:51:23 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 1;
	while (n / i >= 9)
	{
		i *= 10;
		j++;
	}	
	if (!(str = (char*)malloc(sizeof(*str) * j)))
		return (0);	
	k = 0;
	while (i)
	{
		str[k] = n / i + '0';
		n %= i;
		i /= 10;
		k++;
	}
	str[k] = '\0';
	return (str);
}

/*
**int main()
**{
**
**	printf("%s\n", ft_itoa(123456));
**	return(0);
**}
*/

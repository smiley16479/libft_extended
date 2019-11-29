/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:21:26 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/16 19:24:25 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 1;
	while (n / i > 9 || n / i < -9)
		i *= 10 + (0 * j++);
	if (!(str = (char*)malloc(sizeof(*str) * (1 + (n < 0 ? ++j : j)))))
		return (0);
	k = 0;
	if (n < 0)
		str[k++] = '-';
	while (i)
	{
		str[k++] = n < 0 ? (-(long)n / i + '0') : (n / i + '0');
		n %= i;
		i /= 10;
	}
	str[k] = '\0';
	return (str);
}

/*
**int main()
**{
**	int n = -1;
**	int j = 0;
**	char *str1 = "str1";
**	char *tab2 = "tab2";
**
**	while (str1[j])
**	{
**		str1[j++] = tab2[j];
**		printf("%c", *str1);
**		j++;
**	}
**
**	printf("%d\n", (n < 0 ? j++ : j));
**	printf("%d\n", j);
**
**	printf("%s\n", ft_itoa(-2147483648));
**	return(0);
**}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_simple.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:31:17 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/20 19:43:35 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	is_converter(const char c)
{
	char	*type;
	int		i;

	type = " cspdiuxX%";
	i = 0;
	while (type[++i])
		if (c == type[i])
			return (i);
	return (0);
}

int	is_flag(const char c)
{
	char	*flag;
	int		i;

	if (isdigit1(c))
		return (1);
	flag = "-0.*";
	i = -1;
	while (flag[++i])
		if (c == flag[i])
			return (1);
	return (0);
}

int	isdigit1(const char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_strlen1(const char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	setflagwildcard(t_struc *su, va_list ap, int precision_or_field)
{
	if (precision_or_field == 0)
	{
		su->field_wid = va_arg(ap, int);
		if (su->field_wid < 0)
			su->minus = 1;
		su->field_wid < 0 ? su->field_wid *= -1 : 0;
	}
	else
		(su->precision = va_arg(ap, int)) < 0 ? su->precision = 0 : 0;
	return (0);
}

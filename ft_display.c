/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:03:54 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/27 18:01:37 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_display_char(t_struc *su, char c)
{
	if (su->minus)
	{
		write(1, &c, 1);
		su->ret++;
		while (su->field_wid-- - 1 > 0 && su->ret++)
			write(1, " ", 1);
	}
	else
	{
		while (su->field_wid-- - 1 > 0 && ++su->ret)
			write(1, " ", 1);
		write(1, &c, 1);
		su->ret++;
	}
}

void	ft_display_str(t_struc *su, char *str)
{
	int length;

	if (!str)
	{
		ft_display_str(su, "(null)");
		return ;
	}
	length = ft_strlen1(str);
	// (su->precis < length && su->precis >= 0) ? str[su->precis] = 0 : 0;
	if (su->minus)
	{
		while (*str && su->precis-- && ++su->ret)
		{
			write(1, str++, 1);
			su->field_wid--;
		}
		while (su->field_wid-- > 0 && ++su->ret)
			write(1, " ", 1);
	}
	else
	{
		// length = (su->precis < length) ? su->precis: length;// marche mieux sans
		if (su->field_wid > length)
			while (su->field_wid-- > length && ++su->ret)
				write(1, " ", 1);
		while (*str && su->precis-- && ++su->ret)
			write(1, str++, 1);
	}
}

void	ft_display_nb(t_struc *su, char *str)
{
	int length;

	if (*str == '0' && exception_nb_null(su, str))
		return ;
	length = ft_strlen1(str);
	if (su->minus)
	{
		if (*str == '-' && write(1, str++, 1) && ++su->ret)
			su->field_wid--;
		minus_brick(su, str);
	}
	else
	{
		if (*str == '-')
			su->precis++;
		su->precis = su->precis > length ? su->precis - length : 0;
		while (su->field_wid-- > length + su->precis && ++su->ret)
			su->zero && su->precis == -1 ? write(1, "0", 1) : write(1, " ", 1);
		if (*str == '-' && ++su->ret)
			write(1, str++, 1);
		while (su->precis-- && ++su->ret)
			write(1, "0", 1);
		while (*str && ++su->ret)
			write(1, str++, 1);
	}
}

void	ft_display_ptr(t_struc *su, char *str)
{
	int length;

	// *str == '0' && (/*su->precis == 0 ||*/ su->precis == -1) ? *str = '0' : 0;
	su->field_wid -= 2;
	length = ft_strlen1(str);
	if (su->minus)
	{
		write(1, "0x", 2);
		su->ret += 2;
		minus_brick(su, str);
	}
	else
	{
		su->precis = su->precis > length ? su->precis - length : 0;
		while (su->field_wid-- > su->precis + length && ++su->ret)
			write(1, " ", 1);
		write(1, "0x", 2);
		su->ret += 2;
		if (su->precis > 0)
			while (su->precis-- > length && write(1, "0", 1) && ++su->ret)
				su->field_wid--;
		while (*str && ++su->ret)
			write(1, str++, 1);
	}
}

void	ft_display_hexa(t_struc *su, char *str)
{
	int length;
	*str == '0' && su->precis != -1 ? *str = '\0' : 0;
	length = ft_strlen1(str);
	if (su->minus)
	{
		while (su->precis-- > length && write(1, "0", 1) && ++su->ret)
			su->field_wid--;
		while (*str && write(1, str++, 1) && ++su->ret)
			su->field_wid--;
		if (su->field_wid > 0)
			while (su->field_wid-- && ++su->ret)
				write(1, " ", 1);
	}
	else
	{
		su->precis = su->precis > length ? su->precis - length : 0;
		while (su->field_wid-- > su->precis + length && ++su->ret)
			write(1, " ", 1);
		while (su->precis-- /*> length*/ && write(1, "0", 1) && ++su->ret)
			su->field_wid--;
		while (*str && ++su->ret)
			write(1, str++, 1);
	}
}

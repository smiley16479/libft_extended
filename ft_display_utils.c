/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:13:06 by adtheus           #+#    #+#             */
/*   Updated: 2019/12/02 18:12:13 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	minus_brick(t_struc *su, char *str)
{
	int length;

	length = ft_strlen1(str);
	while (su->precis-- > length && write(1, "0", 1) && ++su->ret)
		su->field_wid--;
	while (*str && write(1, str++, 1 && ++su->ret))
		su->field_wid--;
	while (su->field_wid-- > 0 && ++su->ret)
		write(1, " ", 1);
}

void	minusoff_brick(t_struc *su, char *str)
{
	int length;

	length = ft_strlen1(str);
	while (su->field_wid-- > su->precis - length + length && ++su->ret)
		write(1, " ", 1);
	while (su->precis-- > length && ++su->ret)
		write(1, "0", 1);
	while (*str && ++su->ret)
		write(1, str++, 1);
}

void	minusoff_brick_nb(t_struc *su, char *str)
{
	int length;
	int su_precis;

	su_precis = su->precis;
	length = ft_strlen1(str);
	if (*str == '-')
		su->precis++;
	su->precis = su->precis > length ? su->precis - length : 0;
	while (su->field_wid-- > length + su->precis && ++su->ret)
		su->zero && su_precis == -1 ? write(1, "0", 1) : write(1, " ", 1);
	if (*str == '-' && ++su->ret)
		write(1, str++, 1);
	while (su->precis-- && ++su->ret)
		write(1, "0", 1);
	while (*str && ++su->ret)
		write(1, str++, 1);
}

int		exception_nb_null(t_struc *su, char *str)
{
	if (su->precis != -1 && *str == '0')
	{
		minusoff_brick(su, "");
		return (1);
	}
	return (0);
}

void	wildcard_part(const char **str, va_list ap, t_struc *su)
{
	if (**str == '*' && (*str)++)
		setflagwildcard(su, ap, 1);
	else if (isdigit1(**str))
		su->precis = ft_atoi1(str);
	else if (**str == '-' && (*str)++)
		while (isdigit1(**str))
			(*str)++;
	else
		su->precis = 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:13:06 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/25 11:03:03 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	minus_brick(t_struc *su, char *str)
{
	int length;

	length = ft_strlen1(str);
	while (su->precision-- > length && write(1, "0", 1) && ++su->ret)
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
	while (su->field_wid-- > su->precision - length + length && ++su->ret)
		write(1, " ", 1);
	while (su->precision-- > length && ++su->ret)
		write(1, "0", 1);
	while (*str && ++su->ret)
		write(1, str++, 1);
}

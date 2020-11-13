/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer_func.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:58:01 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/29 17:26:21 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	tabfunc_initializer(void (**f)(t_struc *su, va_list ap))
{
	(void)f;
	f[1] = &ft_putchar;
	f[2] = &ft_putstr;
	f[3] = &ft_putptr;
	f[4] = &ft_putnbr;
	f[5] = &ft_putnbr;
	f[6] = &ft_putnbr;
	f[7] = &ft_puthexa;
	f[8] = &ft_puthexa;
	f[9] = &ft_putchar;
}

void	sufunc_initializer(t_struc *su)
{
	su->minus = 0;
	su->zero = 0;
	su->field_wid = 0;
	su->precis = -1;
	su->type = 0;
	su->space = 0;
	*su->str = '\0';
}

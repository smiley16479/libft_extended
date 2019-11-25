/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer_func.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:58:01 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/22 18:50:35 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Ajout pour le check 
*/
#include <stdio.h>

#include "printf.h"
//         0123456789
// type = " cspdiuxX%";

void tabfunc_initializer(void (**f)(t_struc *su, va_list ap))
{
	(void) f;
	// f[0] = &ft_putstr;
	f[1] = &ft_putchar;
	f[2] = &ft_putstr;
	f[3] = &ft_putptr;
	f[4] = &ft_putnbr;
	f[5] = &ft_putnbr;
	f[6] = &ft_putnbr;
	f[7] = &ft_puthexa;
	f[8] = &ft_puthexa;
	f[9] = &ft_putchar;
	// f[9]((void*)"%");
}

void sufunc_initializer(t_struc *su)
{
	su->minus = 0;
	su->zero = 0;
	su->field_wid = 0;
	su->precision = -1;
	su->type = 0;
	su->space = 0 ;
	su->ret = 0 ;
	*su->str = '\0';
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:10:36 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/27 00:17:16 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(t_struc *su, va_list ap)
{
	char	*str;

	str = va_arg(ap, char*);
	ft_display_str(su, str);
}

void	ft_putchar(t_struc *su, va_list ap)
{
	char	c;

	c = su->type == 1 ? va_arg(ap, int) : '%';
	ft_display_char(su, c);
}

void	ft_putnbr(t_struc *su, va_list ap)
{
	char	*str;

	ft_display_nb(su, str = su->type == u_decimal ?
	ft_print_unb(va_arg(ap, unsigned int)) : ft_print_nb(va_arg(ap, int)));
	free(str);
}

void	ft_putptr(t_struc *su, va_list ap)
{
	char	*str;

	str = "0123456789abcdef";
	ft_display_ptr(su, str = itoa_base_pointer(va_arg(ap, size_t), 16, str));
	free(str);
}

void	ft_puthexa(t_struc *su, va_list ap)
{
	char	*str;

	str = su->type == 8 ? "0123456789ABCDEF" : "0123456789abcdef";
	str = itoa_base(va_arg(ap, unsigned int), 16, str);
	ft_display_hexa(su, str);
	free(str);
}

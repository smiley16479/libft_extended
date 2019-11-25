/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:40:20 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/25 19:09:20 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

enum	e_ite {i, j, k, is_neg};
enum	e_typelist {charactere = 1, string, pointer, integer, Integer, u_decimal, un_hex_min, un_hex_maj, percent}; //csp(di)uxX%
typedef	struct s_struc
{
	int		minus;
	int		zero;
	int		space;
	int		field_wid;
	int		precision;
	int		type;
	int		ret;
	char	str[11];
}			t_struc;

typedef void (*f)(t_struc *su, va_list ap);

// Ds printf.c
int ft_printf(const char *str, ...);

// Ds ft_check_simple.c
int	is_converter(const char c);
int	is_flag(const char c);
int isdigit1(const char c);
int ft_strlen1(const char *str);
int arg_parse(const char **str, t_struc *su, va_list ap);
int	conversion_parse(t_struc *su, va_list ap);
int flag_parse(const char **str, va_list ap, t_struc *su);
int	setflagwildcard(t_struc *su, va_list ap, int precision_or_field);

// Ds initializer_func.c
void tabfunc_initializer(void (**f)(t_struc *su, va_list ap));
void sufunc_initializer(t_struc *su);

// Ds printf_utils.c
char	*itoa_base_pointer(size_t ptr, int base, char *str_b);
char	*itoa_base(unsigned int nb, int base, char *str_b);
char	*ft_print_nb(int nbr);
char	*ft_print_unb(unsigned int nb);
int		ft_atoi1(const char **str);

// Ds ft_put_type.c
void	ft_putstr(t_struc *su, va_list ap);
void	ft_putchar(t_struc *su, va_list ap);
void	ft_putnbr(t_struc *su, va_list ap);
void	ft_puthexa(t_struc *su, va_list ap);
void	ft_putptr(t_struc *su, va_list ap);

// Ds ft_display.c
void	ft_display_str(t_struc *su, char *str);
void	ft_display_ptr(t_struc *su, char *str);
void	ft_display_nb(t_struc *su, char *str);
void	ft_display_hexa(t_struc *su, char *str);
void	ft_display_char(t_struc *su, char c);

// Ds ft_display_utils.c
void 	minus_brick(t_struc *su, char *str);
void	minusoff_brick(t_struc *su, char *str);

#endif
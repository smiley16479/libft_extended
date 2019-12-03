/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:16:36 by adtheus           #+#    #+#             */
/*   Updated: 2019/12/02 18:21:23 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	arg_parse(const char **str, t_struc *su, va_list ap)
{
	(void)*(*str)++;
	if ((su->type = is_converter(**str)) && (*str)++)
		return (conversion_parse(su, ap));
	else if (is_flag(**str))
	{
		flag_parse(str, ap, su);
		(su->type = is_converter(**str)) ? (*str)++ : 0;
		conversion_parse(su, ap);
	}
	else
		return (-1);
	return (0);
}

int	conversion_parse(t_struc *su, va_list ap)
{
	t_f funcs[10];

	tabfunc_initializer(funcs);
	funcs[su->type](su, ap);
	return (0);
}

int	flag_parse(const char **str, va_list ap, t_struc *su)
{
	while (is_flag(**str))
	{
		if (**str == '-' && (*str)++)
			su->minus = 1;
		if (**str == ' ' && (*str)++)
			su->space = 1;
		if (**str == '0' && (*str)++)
			su->zero = 1;
		if (isdigit1(**str) || **str == '*')
		{
			if (**str == '*' && (*str)++)
				setflagwildcard(su, ap, 0);
			else if (isdigit1(**str))
				su->field_wid = ft_atoi1(str);
		}
		if (**str == '.' && (*str)++)
			wildcard_part(str, ap, su);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list ap;
	t_struc su;

	va_start(ap, str);
	su.ret = 0;
	while (*str)
	{
		if (*str == '%')
		{
			sufunc_initializer(&su);
			arg_parse(&str, &su, ap);
		}
		else
		{
			write(1, str++, 1);
			su.ret++;
		}
	}
	va_end(ap);
	return (su.ret);
}
/*
**#include <stdio.h>
**
** int main()
** {
** 	// va_list ap;
** 	// const char *str = "la chaine est %-50.10s";
** 	// int tab[1000];
** 	// const char *str = "la chaine est %-*u\n";
** 	// ft_printf(str, 27, 21);
** 	// printf(str, 27, 21);
**
**     int *ptr;
**     // int i = 42;
**     ptr =    NULL; //&i; //
** 	// printf(   "of :%%-.p :%-18.14p\n", ptr);
** 	// ft_printf("my :%%-.p :%-18.14p\n", ptr);
** 	// printf(	  "of :%%10.8d :%12.8d\n",-123456);
** 	// ft_printf("my :%%10.8d :%12.8d\n",-123456);
** 	//  printf(   "of :%%10d :%10.8d\n", -123456);
** 	//  ft_printf("my :%%10d :%10.8d\n", -123456);
** 	// printf(   "of :%%-.10s :%-2.10s\n", "Hello je suis Adrien\n");
** 	// ft_printf("my :%%-.10s :%-2.10s\n", "Hello je suis Adrien\n");
** 	// printf("%d",printf(   "of :%%c :%010c\n", 'c'));
** 	// printf("%d",ft_printf("my :%%c :%010c\n", 'c'));
** 	// printf("%-10.*s", 02,"hello je suis Adrien\n");
** 	// ft_printf("%-10.*s", 02,"hello je suis Adrien\n");
** 	// printf(   "of:%-*p|\n", 5, "abcdef");
** 	// ft_printf("my:%-*p|\n", 5, "abcdef");
** 	// printf("%3s", "ABCD\n");
** 	// ft_printf("%3s", "ABCD\n");
** 	// ft_printf("my :%%15.01d :%15.01d\n",-123456);
**	// printf("of :%%15.01d :%15.01d\n", -123456);
**	//ft_printf("my :%%-8.10d :%10.1x\n", -123456);
**	//printf(   "of :%%-8.10d :%10.1x\n", -123456);
**
** 	// printf("of[%0.d]\n",0);
** 	// ft_printf("my[%0.d]\n",0);
** 	// printf("of[%010.2d]\n",1);
** 	// ft_printf("my[%010.2d]\n",1);
**
** 	// printf(   "of[%.10x]\n",1234);
** 	// ft_printf("my[%.10x]\n",1234);
**
** 	// char *str = "qwer";
** 	// printf(   "of[%%%%%%%p%s]\n",&str, str);
** 	// ft_printf("my[%%%%%%%p%s]\n",&str, str);
**
** 	// ft_printf(str, "hello les aminches");
** 	// conversion_parse(9 , ap);
**
**	printf(   "of[%05.2u]\n", 10);
** 	ft_printf("my[%05.2u]\n", 10);
**
** 	return 0;
** }
*/

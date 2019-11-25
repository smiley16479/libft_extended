/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:16:36 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/25 18:12:33 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int arg_parse(const char **str, t_struc *su, va_list ap)
{
	while (*(*str)++)
		if ((su->type = is_converter(**str)) && (*str)++)
			return (conversion_parse(su, ap));
		else if (is_flag(**str))
		{
			flag_parse(str, ap, su);
			su->type = is_converter(**str);
			conversion_parse(su, ap);
		}
		else
			return (-1);
	return (0);
}

int	conversion_parse(t_struc *su, va_list ap)
{//Ici on analyse le flag et on retourne la bonne conversion
	// type = " cspdiuxX%";
	f funcs[10];
	tabfunc_initializer(funcs);
	funcs[su->type](su, ap);
	return (0);
}

int flag_parse(const char **str, va_list ap, t_struc *su)
{// ici on fait le parsing de flag pour l'affichage
	// printf("Voici l'état de la structure avant :\n int minus : %d\nint zero : %d\nint space : %d\nint field_wi : %d\nint precision : %d\nchar str[11]: %s\n\n", su->minus , su->zero, su->space, su->field_wid, su->precision, su->str);
	while (is_flag(**str))
	{
		if (**str == '-' && (*str)++)
			su->minus = 1;
		if (**str == ' ' && (*str)++)
			su->space = 1;
		if (**str == '0' && (*str)++)
			su->zero = 1;
		if (isdigit1(**str) || **str == '*') //width field
		{
			if (**str == '*' && (*str)++)
				setflagwildcard(su, ap, 0); //su->field_wid = va_arg(ap, int); 
			else if (isdigit1(**str))
				su->field_wid = ft_atoi1(str);
		}
		if (**str == '.' && (*str)++) //precision field
		{
				if (**str == '*' && (*str)++)
					setflagwildcard(su, ap, 1); //su->precision = va_arg(ap, int); //
				else if (isdigit1(**str))
					su->precision = ft_atoi1(str);
				else if (**str == '-' && (*str)++)
					while(isdigit1(**str))
						(*str)++;
				else 
					su->precision = 0;
		}
	}
	// printf("Voici l'etat de la structure apres :\nint minus : %d\nint zero : %d\nint space : %d\nint field_wi : %d\nint precision : %d\nchar str[11]: %s\n\n", su->minus , su->zero, su->space, su->field_wid, su->precision, su->str);
	return (0);
}

int ft_printf(const char *str, ...)
{
	va_list ap;
	va_start(ap, str);
	t_struc su;

	sufunc_initializer(&su);
	while (*str)
	{
		if (*str == '%')
			arg_parse(&str, &su, ap);
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
	//ajout de check
	#include <stdio.h>

int main()
{
	// va_list ap;
	// const char *str = "la chaine est %-50.10s";
	// int tab[1000];
	// const char *str = "la chaine est %-*u\n";
	// ft_printf(str, 27, 21);
	// printf(str, 27, 21);

    int *ptr;
    int i = 42;
    ptr =   &i; // NULL; //
	// printf(   "of :%%-.p :%-18.14p\n", ptr);
	// ft_printf("my :%%-.p :%-18.14p\n", ptr);
	// printf(	  "of :%%10.8d :%12.8d\n",-123456);
	// ft_printf("my :%%10.8d :%12.8d\n",-123456);
	//  printf(   "of :%%10d :%10.8d\n", -123456);
	//  ft_printf("my :%%10d :%10.8d\n", -123456);
	// printf(   "of :%%-.10s :%-2.10s\n", "Hello je suis Adrien\n");
	// ft_printf("my :%%-.10s :%-2.10s\n", "Hello je suis Adrien\n");
	// printf("%d",printf(   "of :%%c :%010c\n", 'c'));
	// printf("%d",ft_printf("my :%%c :%010c\n", 'c'));
	// printf("%-10.*s", 02,"hello je suis Adrien\n");
	// ft_printf("%-10.*s", 02,"hello je suis Adrien\n");
	// printf("%10.50s", "hello je suis Adrien\n");
	// ft_printf("%10.50s", "hello je suis Adrien\n");
	// printf("%3s", "ABCD\n");
	// ft_printf("%3s", "ABCD\n");
	// ft_printf("my :%%15.01d :%15.01d\n",-123456);
    // printf("of :%%15.01d :%15.01d\n", -123456);
    ft_printf("my :%%-8.10d :%10.1x\n", -123456);
    printf(   "of :%%-8.10d :%10.1x\n", -123456);

	// ft_printf(str, "hello les aminches");
	// conversion_parse(9 , ap);
	return 0;
}
*/
/*
int	conversion_parse(int type, va_list ap, t_struc su)
{//Ici on analyse le flag et on retourne la bonne conversion
	(void) ap;
	f funcs[10];
	// type = " cspdiuxX%";
	tabfunc_initializer(funcs);
	funcs[type]((void*)"%", ap);
	return (0);
}
*/

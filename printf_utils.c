/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:52:22 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/29 15:27:23 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*itoa_base_pointer(size_t nb, int base, char *str_b)
{
	char				*str;
	unsigned long long	ite[4];

	ite[i] = 1;
	ite[j] = 1;
	while ((nb / ite[i]) > ((unsigned)base -1) && ite[j]++)
		ite[i] *= base;
	if (!(str = (char*)malloc(sizeof(char) * ite[j] + 1)))
		return (NULL);
	ite[k] = 0;
	while (ite[i] > 0)
	{
		str[ite[k]++] = str_b[nb / ite[i]];
		nb -= (nb / ite[i] * ite[i]);
		ite[i] /= base;
	}
	str[ite[k]] = '\0';
	return (str);
}

char	*itoa_base(unsigned int nb, int base, char *str_b)
{
	char			*str;
	unsigned int	ite[4];

	ite[i] = 1;
	ite[j] = 1;
	while ((nb / ite[i]) > ((unsigned int)base - 1) && ite[j]++)
		ite[i] *= base;
	if (!(str = (char*)malloc(sizeof(char) * ite[j] + 1)))
		return (NULL);
	ite[k] = 0;
	while (ite[i] > 0)
	{
		str[ite[k]++] = str_b[nb / ite[i]];
		nb -= (nb / ite[i] * ite[i]);
		ite[i] /= base;
	}
	str[ite[k]] = '\0';
	return (str);
}

char	*ft_print_nb(int nbr)
{
	int		ite[4];
	char	*str;
	long	nb;

	nb = nbr;
	ite[i] = 1;
	ite[j] = 1;
	ite[is_neg] = nb < 0 ? -1 : 1;
	nb *= ite[is_neg];
	while (nb / ite[i] > 9)
		ite[i] *= 10 + (0 * ite[j]++);
	if (!(str = (char*)malloc(sizeof(*str) * ite[j] + 2)))
		return (NULL);
	ite[k] = 0;
	ite[is_neg] == -1 ? str[ite[k]++] = '-' : 0;
	while (ite[i])
	{
		str[ite[k]++] = '0' + nb / ite[i];
		nb %= ite[i];
		ite[i] /= 10;
	}
	str[ite[k]] = '\0';
	return (str);
}

char	*ft_print_unb(unsigned int nb)
{
	long	ite[4];
	char	*str;

	ite[i] = 1;
	ite[j] = 1;
	while (nb / ite[i] > 9)
		ite[i] *= 10 + (0 * ite[j]++);
	if (!(str = (char*)malloc(sizeof(*str) * ite[j] + 2)))
		return (NULL);
	ite[k] = 0;
	while (ite[i])
	{
		str[ite[k]++] = '0' + nb / ite[i];
		nb %= ite[i];
		ite[i] /= 10;
	}
	str[ite[k]] = '\0';
	return (str);
}

int		ft_atoi1(const char **str)
{
	int	nb;

	nb = 0;
	while (isdigit1(**str))
	{
		nb *= 10;
		nb += **str - 48;
		(*str)++;
	}
	return (nb);
}

/*
**	int		main(void)
**	{
**		char *str_b = "0123456789abcdef";
**		int tab[2090000];
**		printf("%s\n", str_b = itoa_base_pointer((size_t)&tab[0], 16, str_b));
**		free(str_b);
**		// printf("%s\n", itoa_base(0, 16, str_b));
**		printf("%p\n", &tab[2090000]);
**		// printf("%x", -31);
**		return (0);
**	}
*/

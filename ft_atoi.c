/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:34:49 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/08 14:57:18 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit1(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int nb;
	int is_negative;

	is_negative = 1;
	nb = 0;
	while (*str == ' ')
		str++;
	if (*str == '-')
	{
		is_negative *= -1;
		str++;
	}
	while (ft_isdigit1(*str))
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	return (nb * is_negative);
}

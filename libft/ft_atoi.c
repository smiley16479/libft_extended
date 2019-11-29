/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:34:49 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/15 16:01:01 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int nb;
	int is_negative;

	is_negative = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ' ? 1 : 0)
		str++;
	if (*str == '-')
	{
		is_negative *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	nb = 0;
	while (ft_isdigit((int)*str))
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	return (nb * is_negative);
}

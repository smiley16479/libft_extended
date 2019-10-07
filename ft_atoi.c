/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:34:49 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/07 16:20:49 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *str)
{
    int nb;
    int is_negative;

    is_negative = 1;
    while (*str == ' ')
        str++;
    if (*str == '-')
        is_negative *= -1;
    str++;
    while (isdigit(*str))
        ;
    return (nb);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:19:46 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/21 17:13:50 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
**int		main(void)
**{
**	int fd;
**
**	fd = open("./text.txt", O_WRONLY);
**	ft_putchar_fd('c', fd);
**	return (0);
**}
*/

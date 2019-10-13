/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:19:36 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/13 14:32:23 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

/*
**int main(void)
**{
**	int fd;
**	char *str = "rouge";
**
**	fd = open("./text.txt", O_WRONLY);
**	ft_putstr_fd(str, fd);
**	return (0);
**}
*/

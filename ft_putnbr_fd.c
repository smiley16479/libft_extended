/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:19:46 by adtheus           #+#    #+#             */
/*   Updated: 2019/10/17 16:09:36 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	str_nb[12];
	int		i;
	int		k;

	i = 0;
	while (i < 12)
		str_nb[i++] = 0;
	i = 1;
	while (n / i > 9 || n / i < -9)
		i *= 10;
	k = 0;
	if (n < 0)
		str_nb[k++] = '-';
	while (i)
	{
		str_nb[k++] = n < 0 ? (-(long)n / i + '0') : (n / i + '0');
		n %= i;
		i /= 10;
	}
	write(fd, str_nb, k);
}

/*
**int main(void)
**{
**		int fd;
**		fd = open("text.txt", O_CREAT | O_RDWR);
**		ft_putnbr_fd(-2147483648, fd);
**		return (0);
**}
*/

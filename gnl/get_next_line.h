/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adtheus <adtheus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:19:48 by adtheus           #+#    #+#             */
/*   Updated: 2019/11/01 18:52:31 by adtheus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

enum	e_list
{
	error = -1,
	end_file,
	new_line
};
int		ft_strlen(const char *str);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		gnl(char *tmp_str);
int		alloc_line(char **line, char *current_line, int len);
int		get_next_line(int fd, char **line);

#endif

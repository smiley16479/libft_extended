/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:19:48 by adtheus           #+#    #+#             */
/*   Updated: 2020/11/07 23:50:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

enum	e_list
{
	error = -1,
	end_file,
	new_line
};

void	*ft_memmove(void *dst, const void *src, size_t len);
int		gnl(char *tmp_str);
int		alloc_line(char **line, char *current_line, int len);
int		get_next_line(int fd, char **line);

#endif

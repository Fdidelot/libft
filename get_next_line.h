/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 13:50:58 by abassibe          #+#    #+#             */
/*   Updated: 2021/07/26 19:10:46 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# define BUFF_SIZE 50

typedef struct s_buff
{
	int				fd;
	int				ind;
	char			*buff;
	struct s_buff	*next;
}					t_buff;

int					get_next_line(const int fd, char **line);
int					read_file(t_buff *cpy, char **line, int fd);

#endif

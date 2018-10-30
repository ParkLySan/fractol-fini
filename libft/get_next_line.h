/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:01:45 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 21:01:49 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5000000
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

struct	s_gnl
{
	char			*str;
	int				itm;
	int				fd;
	int				read;
	struct s_gnl	*next;
};
typedef struct s_gnl	t_gnl;

#endif

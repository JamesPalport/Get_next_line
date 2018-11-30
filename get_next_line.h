/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:09:06 by amerrouc          #+#    #+#             */
/*   Updated: 2018/11/21 15:23:08 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 9

# include <unistd.h>
# include <stdlib.h>
# include "./libft/includes/libft.h"
# include <limits.h>

int	get_next_line(const int fd, char **line);

#endif

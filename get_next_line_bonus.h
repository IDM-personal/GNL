/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idm <idm@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 17:45:55 by idm               #+#    #+#             */
/*   Updated: 2020/09/28 15:00:17 by idm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int         get_next_line(int fd, char **line);
char	    *ft_strchr(const char *str, int c);
char	    *ft_strdup(const char *s1);
int	        ft_strlen(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
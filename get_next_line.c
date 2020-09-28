/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idm <idm@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 17:15:08 by idm               #+#    #+#             */
/*   Updated: 2020/09/28 15:01:23 by idm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int eofcheck(char **nread, char **line)
{
    if(ft_strchr(*nread, '\0'))
    {
        *line = ft_strdup(*nread);
        free(*line);
        *line = NULL;
        return (0);
    }
    return (0);
}

int toret(int readb, char **nread, char **line)
{
    char *auxcad;

    if (!readb && !*nread)
    {
        *line = "\0";
        return(0);
    }
    if (readb < 0)
    {
        if (*nread != NULL)
        {
            free(*nread);
            *nread = NULL;
        }
        return (-1);
    }
    if((auxcad = ft_strchr(*nread, '\n')))
    {
        *line = ft_strdup(*nread);
        free(*nread);
        *nread = ft_strdup(auxcad + 1);
    }
    else if(eofcheck(&*nread, &*line))
        return (0);
    return (0);
}

int get_next_line(int fd, char **line)
{
    char        *buff;
    static char *nread;
    int         readb;
    char        *cad;



    if(fd < 0 || !line || BUFER_SIZE <= 0 || 
    (!(buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1)))))
        return (-1);
    while ((readb = read(fd, buff, BUFFER_SIZE)) > 0)
	{
        buff[readb] = '\0';
        if(!nread[fd])
            nread[fd] = ft_strdup(buff);
        else
        {
            cad = ft_strjoin(nread[fd], buff);
            free(nread[fd]);
            nread[fd] = cad;
        }
        if(ft_strchr(buff, '\n'))
            break ;
    }
    free(buff);
    buff = NULL;
    return (toret(readb, &nread[fd], &*line));
}

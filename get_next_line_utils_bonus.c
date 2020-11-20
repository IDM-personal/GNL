/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idm <idm@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:26:02 by idm               #+#    #+#             */
/*   Updated: 2020/09/28 15:00:10 by idm              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int		ch;
	int		i;
	char	*cstr;

	cstr = (char*)str;
	i = 0;
	ch = c;
	while (cstr[i] != 0)
	{
		if (cstr[i] == ch)
			return (&cstr[i]);
		i++;
	}
	if (cstr[i] == ch)
		return (&cstr[i]);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	char			*copy;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s1);
	if (!(copy = malloc(len + 1)))
		return (0);
	while (i != len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = 0;
	return (&copy[0]);
}

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*cad;
	int		start;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	if (!(cad = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != 0)
	{
		cad[i] = s1[i];
		i++;
	}
	start = i;
	i = 0;
	while (s2[i] != 0)
	{
		cad[i + start] = s2[i];
		i++;
	}
	cad[i + start] = 0;
	return (cad);
}
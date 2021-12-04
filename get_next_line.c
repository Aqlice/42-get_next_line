/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casautou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:38:39 by casautou          #+#    #+#             */
/*   Updated: 2018/11/16 21:38:43 by casautou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static char *ft_copy(char *s)
{
    char    *line;
    int     i;

    if (s == NULL)
        return (NULL);
    i = 0;
    while (s[i] && s[i] != 10)
        i++;
    line = ft_strnew(i + 1);
    line = ft_strncpy(line, s, i);
    return (line);
}

static char *ft_del(char *s)
{
    char    *line;
    int     i;
    i = 0;

    if (s == NULL)
        return (NULL);
    if (!(ft_strchr(s, 10)))
    {
        free(s);
        return (NULL);
    }
    else
    {
        while (s[i] && s[i] != 10)
            i++;
        line = s;
        s = ft_strdup(s + i + 1);
        free(line);
    }
    return (s);
}

int get_next_line(const int fd, char **line)
{
    char        buf[BUFF_SIZE + 1];
    static char *s;
    char        *tmp;
    int         ret;

    if (!(s))
        s = ft_strnew(1);
    while (!(ft_strchr(s, 10)))
    {
        ret = read(fd, buf, BUFF_SIZE);
        if (ret < 0)
            return (-1);
        if (ret != 0)
        {
            buf[ret] = 0;
            tmp = s;
            s = ft_strjoin(s, buf);
            ft_strdel(&tmp);
        }
        if (ret == 0 && s[0] == '\0')
            return (0);
        if (ret == 0)
            break ;
    }
    *line = ft_copy(s);
    s = ft_del(s);
    return (1);
}
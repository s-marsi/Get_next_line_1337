/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:22:01 by smarsi            #+#    #+#             */
/*   Updated: 2023/12/11 15:12:13 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dstsize > 0)
	{
		while (*src && dstsize-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len_src);
}

static char *read_all(int fd, char *last)
{
	char	*buf;
	int		size;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	size = 1;

	if (!buf)
		return (NULL);
	while (!ft_strchr(last, '\n') && size)
	{
		size = read(fd, buf, BUFFER_SIZE);
		if (size < 0)
		{
			free(buf);
			return (NULL);
		}
		buf[size] = '\0';
		last = ft_strjoin(last, buf);
	}
	free(buf);
	return (last);
}

static char	*read_line(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	printf("read line %s\n\n\n\n\n", src);
	if (src[i] == '\0' || !src)
		return (NULL);
	while (src[i] && src[i] != '\n')
		i++;
	dst = malloc((i + 2) * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, src, i + 2);
	return (dst);
}

static char	*move_last(char *src)
{
	char	*last;
	int		i;

	i = 0;
	if (!src || !src[i])
		return (NULL);
	while (src[i] && src[i] != '\n')
		i++;
	last = malloc((ft_strlen(src) - i + 1) * sizeof(char));
	ft_strlcpy(last, src + i + 1, i + 1);
	return (last);
}

char	*get_next_line(int fd)
{
	static char	*last;
	char		*return_line;
	char		*tmp_all;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	tmp_all = read_all(fd, last);
	return_line = read_line(tmp_all);
	last = move_last(tmp_all);
	return (return_line);
}

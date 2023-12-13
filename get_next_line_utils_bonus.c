/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:05:10 by smarsi            #+#    #+#             */
/*   Updated: 2023/12/12 15:12:39 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	lenght_return;
	size_t	i;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize == 0 || dstsize < len_dst)
		return (ft_strlen(src) + dstsize);
	lenght_return = len_dst + len_src;
	i = 0;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s++))
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*s1_dup;
	int		len;

	len = ft_strlen(s1);
	s1_dup = malloc((len + 1) * 1);
	if (!s1_dup)
		return (NULL);
	s1_dup[0] = '\0';
	ft_strlcat(s1_dup, s1, len + 1);
	return (s1_dup);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s && *s != (char) c)
		s++;
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(len * sizeof(char));
	if (!str)
		return (str);
	str[0] = '\0';
	ft_strlcat(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, len);
	free(s1);
	return (str);
}

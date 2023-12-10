/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:22:13 by smarsi            #+#    #+#             */
/*   Updated: 2023/12/09 09:39:34 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_LINE_LINE_H
# define GET_LINE_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
# endif
# include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);

#endif
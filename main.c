/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:44:04 by smarsi            #+#    #+#             */
/*   Updated: 2023/12/13 17:25:57 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int main()
{
    int a = open("a.txt", O_RDWR);
    char *c;
    while ((c = get_next_line(a)) != NULL)
    {
        printf("%s", c);
        free(c);
    }
	printf("\n%s", c);
    free(c);
    // system("leaks a.out");
    close(a);
    return(0);
}


// static int	count_char(char *src)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	while (src[i] && src[i] != '\n')
// 		i++;
// 	if (src[i] == '\n')
// 		i++;
// 	count = 0;
// 	while (src[i])
// 	{
// 		count++;
// 		i++;
// 	}
// 	return (count);
// }


// char	*get_next_line(int fd)
// {
// 	char		*dst;
// 	static char	*last_str;
// 	char		*tmp_str;
// 	int			size;
// 	char		*return_str;

// 	size = 0;
// 	tmp_str = NULL;
// 	tmp_str = malloc((BUFFER_SIZE + 1) * sizeof(char));
// 	if (!tmp_str)
// 		return (NULL);
// 	size = read(fd, tmp_str, BUFFER_SIZE);
// 	if (size == -1)
// 	{
// 		free(tmp_str);
// 		return (NULL);
// 	}
// 	tmp_str[size] = '\0';
// 	dst = ft_strjoin(last_str, tmp_str);
// 	return_str = ft_strdup(into_newline(dst));
// 	size = ft_strlen(dst) - ft_strlen(return_str);
// 	last_str = malloc((size + 1) * sizeof(char));
// 	last_str = ft_strchr(dst, '\n') + 1;
// 	free(tmp_str);
// 	return (return_str);
// }
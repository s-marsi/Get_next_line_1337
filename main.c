/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarsi <smarsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:44:04 by smarsi            #+#    #+#             */
/*   Updated: 2023/12/16 13:41:44 by smarsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int main()
{
    int a = open("a.txt", O_RDONLY);
    char *c;
    while ((c = get_next_line(a)) != NULL)
    {
        printf("%s", c);
        free(c);
    }
	printf("\n%s", c);
    // system("leaks a.out"); (check for memory leaks)
    close(a);    
    return(0);
}

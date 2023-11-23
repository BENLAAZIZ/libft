/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:34:14 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/23 16:16:11 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	int fd = open("/Users/hben-laz/Desktop/libft/test.txt", O_RDWR);
// 	printf("|%d|\n", fd);
// 	if (fd == -1)
// 		printf ("open failed\n");
// 	ft_putstr_fd("hello", fd);
// }

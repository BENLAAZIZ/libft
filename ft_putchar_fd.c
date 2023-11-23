/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:28:27 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/23 17:02:50 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
// #include <stdio.h>
// #include <fcntl.h>

// int main ()
// {
// 	int fd = 1;
// 	ft_putchar_fd('c', fd);
// 	printf("\n%d", fd);
// }
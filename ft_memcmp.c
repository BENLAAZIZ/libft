/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:14:50 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/09 21:40:08 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *)ptr1;
	c2 = (unsigned char *)ptr2;
	while (i < num)
	{
		if (*(c1 + i) != *(c2 + i))
			return (*(c1 + i) - *(c2 + i));
		i++;
	}
	return (0);
}

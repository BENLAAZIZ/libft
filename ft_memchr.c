/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:57:36 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/09 21:37:53 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;
	unsigned char	cc;

	i = 0;
	cs = (unsigned char *)s;
	cc = (unsigned char )c;
	while (i < n)
	{
		if (*cs == cc)
			return ((void *)cs);
		i++;
		cs++;
	}
	return (NULL);
}

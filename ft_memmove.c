/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:48:53 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/12 21:38:35 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*sc;

	d = (unsigned char *)dst;
	sc = (unsigned char *)src;
	if (d > sc)
	{
		while (len > 0)
		{
			len--;
			*(d + len) = *(sc + len); 
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

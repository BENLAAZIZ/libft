/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:16:38 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/13 12:22:16 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (*(src + i) != '\0')
		{
			if (size - 1 > i)
			{
				*(dst + i) = *(src + i);
				i++;
			}
			else
				break ;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}

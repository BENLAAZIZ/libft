/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:49:03 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/18 20:01:42 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ned[0] == '\0')
		return ((char *)hay);
	if (!hay && n == 0 && *ned)
		return (NULL);
	while (hay[i] != '\0' && i < n)
	{
		if (hay[i] == ned[0])
		{
			j = 0;
			while (hay[i + j] == ned[j] && ned[j] != '\0' && i + j < n)
				j++;
			if (ned[j] == '\0')
				return ((char *)(hay + i));
		}
		i++;
	}
	return (NULL);
}

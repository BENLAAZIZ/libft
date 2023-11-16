/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:33:17 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/09 20:03:45 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	if ((unsigned char)c == '\0' )
		return ((char *)(str + len));
	while (len >= 0)
	{
		if (str[len] == (unsigned char)c)
			return ((char *)(str + len));
		len--;
	}
	return (NULL);
}
